#include "sutvr.h"
#include "ui_sutvr.h"

SUTVR::SUTVR(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SUTVR)
{
    ui->setupUi(this);

    //добавляем поддержку русского языка
    QTextCodec::setCodecForTr(QTextCodec::codecForName("Windows-1251"));

    //инициализируем сокеты
    socket_1 = new QUdpSocket(this);
    socket_2 = new QUdpSocket(this);

    //проверяем подключение сокетов
    firstPortChanged(1);
    secondPortChanged(1);

    //СИГНАЛЫ/СЛОТЫ
    //При смене состояния чекбокса меняем состояния других
    //чекбоксов в соответствии с режимом
    connect(ui->treeWidget, SIGNAL(itemChanged(QTreeWidgetItem*, int)),
            this, SLOT(treeStatusChanged(QTreeWidgetItem*, int)));
    //При смене состояния чекбокса "Первый адрес"
    //биндим/перестаем биндить соответствующий порт
    connect(ui->firstPort, SIGNAL(stateChanged(int)),
            this, SLOT(firstPortChanged(int)));
    //При смене состояния чекбокса "Второй адрес"
    //биндим/перестаем биндить соответствующий порт
    connect(ui->secondPort, SIGNAL(stateChanged(int)),
            this, SLOT(secondPortChanged(int)));
    //Прослушиваем первый порт
    connect(socket_1, SIGNAL(readyRead()),
            this, SLOT(readMessageFromFirstPort()));
    //Прослушиваем второй порт
    connect(socket_2, SIGNAL(readyRead()),
            this, SLOT(readMessageFromSecondPort()));
}

/*Процедура
Проходит по всем элементам дерева, за исключением первого
Если все элементы в состоянии Unchecked, то задает первому элементу
состояние Checked*/
void SUTVR::isReady()
{
    bool flag = false;
    for(int i = 1; i < ui->treeWidget->topLevelItemCount(); i++)
        if(ui->treeWidget->topLevelItem(i)->checkState(Qt::Unchecked))
        {
            flag = true;
            break;
        }
    if(!flag)
        ui->treeWidget->topLevelItem(0)->setCheckState(0, Qt::Checked);
}

/*Функция, принимающая на вход массив байт bytes, сокет socket, адрес sender и порт senderPort
Сравнивает пришедшее сообщение со стандартными
Возвращает целое число в соответствии с пришедшим сообщением
Меняет статус имитатора на соответствующий*/
int SUTVR::decode(QByteArray bytes)
{
    if((bytes.toHex() == "41b40000") || (bytes.toHex() == "41bc0000"))
    {
        ui->status->setText(tr("Запрос состояния готовности"));
        return 1;
    }
    else if((bytes.toHex() == "61b30300") || (bytes.toHex() == "61bb0300"))
        ui->status->setText(tr("Периодический опрос"));
    else if((bytes.toHex() == "61b30600") || (bytes.toHex() == "61bb0600"))
        ui->status->setText(tr("Переход в режим ДПП"));
    else if((bytes.toHex() == "61b30900") || (bytes.toHex() == "61bb0900"))
        ui->status->setText(tr("Отмена проведения режима"));
    else if((bytes.toHex() == "61b30a00") || (bytes.toHex() == "61bb0a00"))
        ui->status->setText(tr("Проверка 1 линии связи"));
    else if((bytes.toHex() == "61b30b00") || (bytes.toHex() == "61bb0b00"))
        ui->status->setText(tr("Проверка 2 линии связи"));
    else
    {
        ui->status->setText(tr("Неизвестная команда"));
        return 2;
    }
    return 0;
}

/*Процедура, принимающая на вход сокет socket, адрес sender, порт senderPort и флаг flag
Выдает ответное сообщение в зависимости от значения флага flag
flag == 0: выводим адрес порта
flag == 1: выводим адрес порта и состояние датчиков
flag == 2: выводим адрес порта и ставим единицы в соответствующие ошибке биты*/
void SUTVR::writeRequestMessage(QUdpSocket *socket, QHostAddress sender, quint16 senderPort, int flag)
{
    QBitArray bits(16);
    quint16 port = socket->localPort();
    for(int i = 11; i < 16; i++)
    {
        bits.setBit(i, port % 10);
        port /= 10;
    }
    if(flag == 1)
    {
        QBitArray status(16);
        for(int i = 0; i < ui->treeWidget->topLevelItemCount(); i++)
            status[i] = ui->treeWidget->topLevelItem(i)->checkState(0);
        bits = sum(bits, status);
    }
    else if(flag == 2)
    {
        bits.setBit(0, 1);
        bits.setBit(10, 1);
    }
    socket->writeDatagram(toBytes(bits), sender, senderPort);
    console("*** Answer ***", toBytes(bits));
}

/*Процедура, принимающая на вход строку и массив байт
Выводит на экран строку и преобразованный в биты массив байт, если
пользователь поставил соответствующую галочку*/
void SUTVR::console(QString str, QByteArray byte)
{
    std::cout << "\n";
    if(ui->console->isChecked())
    {
        std::cout << str.toStdString() << "\n";
        printBitArray(toBits(byte));
    }
}

/*Процедура, принимающая элемент дерева item, который был изменен и номер столбца
Если item - первый элемент дерева и соответствует состоянию Checked, то задает остальным элементам
состояние Unchecked. Иначе - вызывает функцию isReady
Если item - не первый элемент дерева и соответствует состоянию Checked, то задает первому элементу
состояние Unchecked. Иначе - вызывает функцию isReady*/
void SUTVR::treeStatusChanged(QTreeWidgetItem* item, int col)
{
    if(ui->treeWidget->topLevelItem(0) == item)
    {
        if(ui->treeWidget->topLevelItem(0)->checkState(0))
            for(int i = 1; i < ui->treeWidget->topLevelItemCount(); i++)
                ui->treeWidget->topLevelItem(i)->setCheckState(col, Qt::Unchecked);
        else
            isReady();
    }
    else
    {
        if(item->checkState(col))
            ui->treeWidget->topLevelItem(0)->setCheckState(col, Qt::Unchecked);
        else
            isReady();
    }
}

/*Процедура, принимающая целочисленную переменную state
Если state не равен нулю, то биндит порт 10110
Иначе - перестает его биндить*/
void SUTVR::firstPortChanged(int state)
{
    if(state)
    {
        if(!socket_1->bind(QHostAddress::LocalHost, 10110))
        {
            ui->firstPort->setCheckState(Qt::Unchecked);
            std::cout << "Can't bind 1 port";
        }
        else
            std::cout << "Port 1 is ready\n";
    }
    else
    {
        socket_1->close();
        std::cout << "Port 1 is closed\n";
    }
}

/*Процедура, принимающая целочисленную переменную state
Если state не равен нулю, то биндит порт 10111
Иначе - перестает его биндить*/
void SUTVR::secondPortChanged(int state)
{
    if(state)
    {
        if(!socket_2->bind(QHostAddress::LocalHost, 10111))
        {
            ui->secondPort->setCheckState(Qt::Unchecked);
            std::cout << "Can't bind 2 port\n";
        }
        else
            std::cout << "Port 2 is ready\n";

    }
    else
    {
        socket_2->close();
        std::cout << "Port 2 is closed\n";
    }
}

/*Процедура, читающая сообщения, пришедшие на первый сокет
Извлекает из сообщения информацию, адрес отправителя и номер порта
Вызывает функции console и отправляет ответное сообщение*/
void SUTVR::readMessageFromFirstPort()
{
    QByteArray buffer;
    buffer.resize(socket_1->pendingDatagramSize());
    QHostAddress sender;
    quint16 senderPort;
    socket_1->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);
    console("*** Message ***", buffer);
    writeRequestMessage(socket_1, sender, senderPort, decode(buffer));
}

/*Процедура, читающая сообщения, пришедшие на второй сокет
Извлекает из сообщения информацию, адрес отправителя и номер порта
Вызывает функции console и отправляет ответное сообщение*/
void SUTVR::readMessageFromSecondPort()
{
    QByteArray buffer;
    buffer.resize(socket_2->pendingDatagramSize());
    QHostAddress sender;
    quint16 senderPort;
    socket_2->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);
    console("*** Message ***", buffer);
    writeRequestMessage(socket_2, sender, senderPort, decode(buffer));
}

SUTVR::~SUTVR()
{
    delete ui;
}
