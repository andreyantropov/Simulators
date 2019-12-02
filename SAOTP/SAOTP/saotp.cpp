#include "saotp.h"
#include "ui_saotp.h"

SAOTP::SAOTP(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::SAOTP)
{
    ui->setupUi(this);

    //Задаем кодировку, поддерживающую кириллицу
    QTextCodec::setCodecForTr(QTextCodec::codecForName("Windows-1251"));

    //Добавляем радиобоксы в дерево
    addRadio();

    //Объявляем сокеты
    socket_1 = new QUdpSocket(this);
    socket_2 = new QUdpSocket(this);

    //Биндим порты и выдаем сообщение об успехе/неудаче
    firstPortChanged(1);
    secondPortChanged(1);

    //СИГНАЛЫ/СЛОТЫ
    //Открывает/закрывает первый порт в соответствии с состоянием чекбокса firstPort
    connect(ui->firstPort, SIGNAL(stateChanged(int)),
            this, SLOT(firstPortChanged(int)));
    //Открывает/закрывает второй порт в соответствии с состоянием чекбокса secondPort
    connect(ui->secondPort, SIGNAL(stateChanged(int)),
            this, SLOT(secondPortChanged(int)));
    //Слушаем первый порт
    connect(socket_1, SIGNAL(readyRead()),
            this, SLOT(readMessageFromFirstPort()));
    //Слушаем второй порт
    connect(socket_2, SIGNAL(readyRead()),
            this, SLOT(readMessageFromSecondPort()));
}

/*Процедура, принимающая на вход целое число state - состояние чекбокса firstAddress
В зависимости от состояния открывает/закрывает порт*/
void SAOTP::firstPortChanged(int state)
{
    if(state)
    {
        if(!socket_1->bind(QHostAddress::LocalHost, 10100))
        {
            ui->firstPort->setCheckState(Qt::Unchecked);
            std::cout << "Can't bind 1 port\n";
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

/*Процедура, принимающая на вход целое число state - состояние чекбокса secondAddress
В зависимости от состояния открывает/закрывает порт*/
void SAOTP::secondPortChanged(int state)
{
    if(state)
    {
        if(!socket_2->bind(QHostAddress::LocalHost, 10101))
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

/*Процедура, считывающая сообщения, приходящие на первый порт
и отправляющая ответные сообщения*/
void SAOTP::readMessageFromFirstPort()
{
    QByteArray buffer;
    buffer.resize(socket_1->pendingDatagramSize());
    QHostAddress sender;
    quint16 senderPort;
    socket_1->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);
    console("*** Message ***", buffer);
    writeRequestMessage(socket_1, sender, senderPort, decode(buffer));
}

/*Процедура, считывающая сообщения, приходящие на второй порт
и отправляющая ответные сообщения*/
void SAOTP::readMessageFromSecondPort()
{
    QByteArray buffer;
    buffer.resize(socket_2->pendingDatagramSize());
    QHostAddress sender;
    quint16 senderPort;
    socket_2->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);
    console("*** Message ***", buffer);
    writeRequestMessage(socket_2, sender, senderPort, decode(buffer));
}

/*Функция, принимающая на вход массив байт bytes
Сравнивает его со стандартными командами
Возвращает целое число в соответствии с совпадениями*/
int SAOTP::decode(QByteArray bytes)
{
    if((bytes.toHex() == "58a4") || (bytes.toHex() == "58ac"))
    {
        ui->status->setText(tr("Запрос состояния готовности изделия 15Ц150"));
        return 1;
    }
    else if((bytes.toHex() == "61a30300") || (bytes.toHex() == "61ab0300"))
        ui->status->setText(tr("Периодический опрос"));
    else if((bytes.toHex() == "61a30400") || (bytes.toHex() == "61ab0400"))
        ui->status->setText(tr("Указание изделием 15Н2192 признака 'Люки открыты'"));
    else if((bytes.toHex() == "61a30500") || (bytes.toHex() == "61ab0500"))
        ui->status->setText(tr("Указание изделием 15Н2192 признака 'Люки закрыты'"));
    else if((bytes.toHex() == "61a30600") || (bytes.toHex() == "61ab0600"))
        ui->status->setText(tr("Переход в режим ДПП"));
    else if((bytes.toHex() == "61a30900") || (bytes.toHex() == "61ab0900"))
        ui->status->setText(tr("Отмена проведения режима"));
    else if((bytes.toHex() == "61a30a00") || (bytes.toHex() == "61ab0a00"))
        ui->status->setText(tr("Проверка 1 линии связи"));
    else if((bytes.toHex() == "61a30b00") || (bytes.toHex() == "61ab0b00"))
        ui->status->setText(tr("Проверка 2 линии связи"));
    else if((bytes.toHex() == "61a30d00") || (bytes.toHex() == "61ab0d00"))
        ui->status->setText(tr("Выдать релейный сигнал (проверка линии связи НКП)"));
    else
    {
        ui->status->setText(tr("Неизвестная команда"));
        return 2;
    }
    return 0;
}

/*Функция, возвращающая массив бит - состояния чекбоксов и радиобаттонов приложения*/
QBitArray SAOTP::getStatus()
{
    return sum(getCheckBoxStatus(), getRadioButtonStatus());
}

/*Функция, формирующая и возвращающая массив бит
в соответствии с состояниями "датчиков"-чекбоксов*/
QBitArray SAOTP::getCheckBoxStatus()
{
    QBitArray bits;
    for(int i = 0; i < 8; i++)
    {
        QBitArray line((ui->treeWidget->topLevelItem(i)->childCount()/16 + 1) * 16);
        for(int j = 0; j < ui->treeWidget->topLevelItem(i)->childCount(); j++)
            line.setBit(j, ui->treeWidget->topLevelItem(i)->child(j)->checkState(0));
        bits = sum(bits, line);
    }
    return bits;
}

/*Функция, формирующая и возвращающая массив бит
в соответствии с состоянием "датчиков"-радиобаттонов
(см. алгоритм на стр. 42)*/
QBitArray SAOTP::getRadioButtonStatus()
{
    QBitArray bits(0);
    for(int i = 0; i < vec.size(); i += 2)
    {
        QBitArray line(16);
        if(vec[i]->button(1)->isChecked())
        {
            line.setBit(0, 1);
            line.setBit(1, 1);
        }
        else if(vec[i]->button(2)->isChecked())
        {
            line.setBit(1, 1);
            line.setBit(2, 1);
        }
        else if(vec[i]->button(3)->isChecked())
        {
            line.setBit(0, 1);
            line.setBit(1, 1);
            line.setBit(2, 1);
        }
        else if(vec[i]->button(4)->isChecked())
            line.setBit(3, 1);
        else if(vec[i]->button(5)->isChecked())
        {
            line.setBit(2, 1);
            line.setBit(3, 1);
        }
        else if(vec[i]->button(6)->isChecked())
        {
            line.setBit(0, 1);
            line.setBit(2, 1);
            line.setBit(3, 1);
        }
        else if(vec[i]->button(7)->isChecked())
        {
            line.setBit(1, 1);
            line.setBit(2, 1);
            line.setBit(3, 1);
        }

        if(vec[i + 1]->button(0)->isChecked())
            line.setBit(4, 1);
        else if(vec[i + 1]->button(1)->isChecked())
            line.setBit(5, 1);
        else if(vec[i + 1]->button(2)->isChecked())
        {
            line.setBit(4, 1);
            line.setBit(6, 1);
        }
        else if(vec[i + 1]->button(3)->isChecked())
        {
            line.setBit(5, 1);
            line.setBit(6, 1);
        }
        bits = sum(bits, line);
    }
    return bits;
}

/*Процедура, принимающая на вход сокет, адрес отправителя, хост отправителя и целое число - flag
В соответствии со значением флага формирует ответное сообщение и отправляет его*/
void SAOTP::writeRequestMessage(QUdpSocket *socket, QHostAddress sender, quint16 senderPort, int flag)
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
        bits = sum(bits, getStatus());
        QBitArray status(32), start(16), end(16), ones(16);
        ones.fill(1, 0, 16);
        status = resultSum(getStatus());
        for(int i = 0; i < status.size(); i++)
            i < 16 ? start.setBit(i, status[i]) : end.setBit(i, status[i]);
        bits = sum(sum(bits, bitMinus(ones, end)), bitMinus(ones, start));
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
void SAOTP::console(QString str, QByteArray byte)
{
    std::cout << "\n";
    if(ui->console->isChecked())
    {
        std::cout << str.toStdString() << "\n";
        printBitArray(toBits(byte));
    }
}

/*Процедура, заполняюзая treeWidget радиобоксами*/
void SAOTP::addRadio()
{
    for(int count = 8; count < ui->treeWidget->topLevelItemCount(); count++)
    {
        QTreeWidgetItem *child = new QTreeWidgetItem;
        QButtonGroup *group = new QButtonGroup;
        for(int i = 0; i < ui->treeWidget->topLevelItem(count)->childCount(); i++)
        {
            QRadioButton *radio = new QRadioButton;
            group->addButton(radio, i);
            child = ui->treeWidget->topLevelItem(count)->child(i);
            ui->treeWidget->setItemWidget(child, 0, radio);
            if(i == 0)
                radio->setChecked(true);
        }
        vec.push_back(group);
    }
}

/*Функция, принимающая на вход два целых числа:
num - число, возводимое в степень
degree - степень числа
Возвращает возведенное в степень целое число*/
int SAOTP::pow(int num, int degree)
{
    int result = 1;
    for(int i = 0; i < degree; i++)
        result *= num;
    return result;
}

/*Функция, принимающая на вход массив бит bitArray
Преобразовывает его в целое число и возвращает*/
int SAOTP::toInt(QBitArray bitArray)
{
    int result = 0;
    for(int i = 0; i < bitArray.size(); i++)
        if(bitArray[i] == true)
            result += pow(2, i);
    return result;
}

/*Функция, принимающая на вход целое число num
Пребразовывает его в массив бит и возвращает*/
QBitArray SAOTP::toBit(int num)
{
    QBitArray bits(32);
    int step = 0;
    while(num)
    {
        bits.setBit(step, num%2);
        num /= 2;
        step++;
    }
    return bits;
}

/*Функция, принимающая на вход два массива бит
Переводит их в целые числа, складывает, переводит результат
обратно в массив бит и возвращает*/
QBitArray SAOTP::bitSum(QBitArray bitArray1, QBitArray bitArray2)
{
    return toBit(toInt(bitArray1) + toInt(bitArray2));
}

/*Функция, принимающая на вход два массива бит
(предполагается, что первый массив состоит только из единиц)
Поэлементно вычитает из первого массива соответствующие
элементы второго*/
QBitArray SAOTP::bitMinus(QBitArray bitArray1, QBitArray bitArray2)
{
    QBitArray bits(16);
    for(int i = 0; i < bits.size(); i++)
        bits.setBit(i, bitArray1[i] - bitArray2[i]);
    return bits;
}

/*Функция, принимающая на вход массив бит bitArray
Возвращает массив бит - построчную сумму
массива bitArray*/
QBitArray SAOTP::resultSum(QBitArray bitArray)
{
    QBitArray bits(32);
    for(int i = 0; i < bitArray.size()/16; i++)
    {
        QBitArray buffer(16);
        for(int j = 0; j < 16; j++)
            buffer.setBit(j, bitArray[i * 16 + j]);
        bits = bitSum(bits, buffer);
    }
    return bits;
}

/*Функция, принимающая на вход массив байт bytes
Возвращает массив бит, образованный из массива bytes*/
QBitArray SAOTP::toBits(QByteArray bytes)
{
    QBitArray bits(bytes.count() * 8);
    for(int i = 0; i < bytes.count(); i++)
        for(int j = 0; j < 8; j++)
            bits.setBit(i*8 + j, bytes.at(i)&(1 << j));
    return bits;
}

/*Функция, принимающая на вход массив бит bits
Возвращает массив байт, образованный из массива bits*/
QByteArray SAOTP::toBytes(QBitArray bits)
{
    QByteArray bytes;
    for(int i = 0; i < bits.count(); i++)
        bytes[i/8] = (bytes.at(i/8) | ((bits[i] ? 1 : 0) << (i%8)));
    return bytes;
}

/*Функция, принимающая два массива бит first, second
Возвращает массив бит - сумму first и second*/
QBitArray SAOTP::sum(QBitArray first, QBitArray second)
{
    QBitArray result(first.size() + second.size());
    for(int i = 0; i < first.size(); i++)
        result.setBit(i, first[i]);
    for(int i = first.size(); i < first.size() + second.size(); i++)
        result.setBit(i, second[i - first.size()]);
    return result;
}

/*Процедура, принимающая на вход массив бит
Выводит его на экран (по 16 символов в строке)*/
void SAOTP::printBitArray(QBitArray bitArray)
{
    for(int i = 0; i < bitArray.size()/16; i++)
    {
        for(int j = 15 + i * 16; j >= 0 + i * 16; j--)
            std::cout << bitArray[j];
        std::cout << "\n";
    }
    std::cout << "\n" << "\n";
}

/*Деструктор класса*/
SAOTP::~SAOTP()
{
    delete ui;
}
