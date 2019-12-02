#include "sutvr.h"
#include "ui_sutvr.h"

SUTVR::SUTVR(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SUTVR)
{
    ui->setupUi(this);

    //��������� ��������� �������� �����
    QTextCodec::setCodecForTr(QTextCodec::codecForName("Windows-1251"));

    //�������������� ������
    socket_1 = new QUdpSocket(this);
    socket_2 = new QUdpSocket(this);

    //��������� ����������� �������
    firstPortChanged(1);
    secondPortChanged(1);

    //�������/�����
    //��� ����� ��������� �������� ������ ��������� ������
    //��������� � ������������ � �������
    connect(ui->treeWidget, SIGNAL(itemChanged(QTreeWidgetItem*, int)),
            this, SLOT(treeStatusChanged(QTreeWidgetItem*, int)));
    //��� ����� ��������� �������� "������ �����"
    //������/��������� ������� ��������������� ����
    connect(ui->firstPort, SIGNAL(stateChanged(int)),
            this, SLOT(firstPortChanged(int)));
    //��� ����� ��������� �������� "������ �����"
    //������/��������� ������� ��������������� ����
    connect(ui->secondPort, SIGNAL(stateChanged(int)),
            this, SLOT(secondPortChanged(int)));
    //������������ ������ ����
    connect(socket_1, SIGNAL(readyRead()),
            this, SLOT(readMessageFromFirstPort()));
    //������������ ������ ����
    connect(socket_2, SIGNAL(readyRead()),
            this, SLOT(readMessageFromSecondPort()));
}

/*���������
�������� �� ���� ��������� ������, �� ����������� �������
���� ��� �������� � ��������� Unchecked, �� ������ ������� ��������
��������� Checked*/
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

/*�������, ����������� �� ���� ������ ���� bytes, ����� socket, ����� sender � ���� senderPort
���������� ��������� ��������� �� ������������
���������� ����� ����� � ������������ � ��������� ����������
������ ������ ��������� �� ���������������*/
int SUTVR::decode(QByteArray bytes)
{
    if((bytes.toHex() == "41b40000") || (bytes.toHex() == "41bc0000"))
    {
        ui->status->setText(tr("������ ��������� ����������"));
        return 1;
    }
    else if((bytes.toHex() == "61b30300") || (bytes.toHex() == "61bb0300"))
        ui->status->setText(tr("������������� �����"));
    else if((bytes.toHex() == "61b30600") || (bytes.toHex() == "61bb0600"))
        ui->status->setText(tr("������� � ����� ���"));
    else if((bytes.toHex() == "61b30900") || (bytes.toHex() == "61bb0900"))
        ui->status->setText(tr("������ ���������� ������"));
    else if((bytes.toHex() == "61b30a00") || (bytes.toHex() == "61bb0a00"))
        ui->status->setText(tr("�������� 1 ����� �����"));
    else if((bytes.toHex() == "61b30b00") || (bytes.toHex() == "61bb0b00"))
        ui->status->setText(tr("�������� 2 ����� �����"));
    else
    {
        ui->status->setText(tr("����������� �������"));
        return 2;
    }
    return 0;
}

/*���������, ����������� �� ���� ����� socket, ����� sender, ���� senderPort � ���� flag
������ �������� ��������� � ����������� �� �������� ����� flag
flag == 0: ������� ����� �����
flag == 1: ������� ����� ����� � ��������� ��������
flag == 2: ������� ����� ����� � ������ ������� � ��������������� ������ ����*/
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

/*���������, ����������� �� ���� ������ � ������ ����
������� �� ����� ������ � ��������������� � ���� ������ ����, ����
������������ �������� ��������������� �������*/
void SUTVR::console(QString str, QByteArray byte)
{
    std::cout << "\n";
    if(ui->console->isChecked())
    {
        std::cout << str.toStdString() << "\n";
        printBitArray(toBits(byte));
    }
}

/*���������, ����������� ������� ������ item, ������� ��� ������� � ����� �������
���� item - ������ ������� ������ � ������������� ��������� Checked, �� ������ ��������� ���������
��������� Unchecked. ����� - �������� ������� isReady
���� item - �� ������ ������� ������ � ������������� ��������� Checked, �� ������ ������� ��������
��������� Unchecked. ����� - �������� ������� isReady*/
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

/*���������, ����������� ������������� ���������� state
���� state �� ����� ����, �� ������ ���� 10110
����� - ��������� ��� �������*/
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

/*���������, ����������� ������������� ���������� state
���� state �� ����� ����, �� ������ ���� 10111
����� - ��������� ��� �������*/
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

/*���������, �������� ���������, ��������� �� ������ �����
��������� �� ��������� ����������, ����� ����������� � ����� �����
�������� ������� console � ���������� �������� ���������*/
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

/*���������, �������� ���������, ��������� �� ������ �����
��������� �� ��������� ����������, ����� ����������� � ����� �����
�������� ������� console � ���������� �������� ���������*/
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
