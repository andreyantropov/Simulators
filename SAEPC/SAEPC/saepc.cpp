#include "saepc.h"
#include "ui_saepc.h"

SAEPC::SAEPC(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SAEPC)
{
    ui->setupUi(this);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("Windows-1251"));

    //��������� ������
    socket_1 = new QUdpSocket(this);
    socket_2 = new QUdpSocket(this);

    //������ ����� � ������ ��������� �� ������/�������
    firstPortChanged(1);
    secondPortChanged(1);

    //�������/�����
    //��� ��������� ������� �������� "������ �����"
    //������/��������� ������� ��������������� ����
    connect(ui->firstPort, SIGNAL(stateChanged(int)),
            this, SLOT(firstPortChanged(int)));
    //��� ��������� ������� �������� "������� �����"
    //������/��������� ������� ��������������� ����
    connect(ui->secondPort, SIGNAL(stateChanged(int)),
            this, SLOT(secondPortChanged(int)));
    //������� ������ ����
    connect(socket_1, SIGNAL(readyRead()),
            this, SLOT(readMessageFromFirstPort()));
    //������� ������ ����
    connect(socket_2, SIGNAL(readyRead()),
            this, SLOT(readMessageFromSecondPort()));
}

/*�������, ����������� �� ���� ������ ���� bytes
���������� ��� �� ����� ����������� ���������
 ������ ����� ������� ���������� � ���������� ���������������
��������� �����*/
int SAEPC::decode(QByteArray bytes)
{
    if((bytes.toHex() == "4984") || (bytes.toHex() == "498c"))
    {
        ui->status->setText(tr("������ ��������� ���������� ������� 15�334"));
        return 1;
    }
    else if((bytes.toHex() == "61830300") || (bytes.toHex() == "618b0300"))
        ui->status->setText(tr("������������� �����"));
    else if((bytes.toHex() == "61830100") || (bytes.toHex() == "618b0100"))
        ui->status->setText(tr("������� � ����� '���������'"));
    else if((bytes.toHex() == "61830500") || (bytes.toHex() == "618b0500"))
        ui->status->setText(tr("����� �� ������ '���������'"));
    else if((bytes.toHex() == "61830600") || (bytes.toHex() == "618b0600"))
        ui->status->setText(tr("������� � ����� ���"));
    else if((bytes.toHex() == "61830900") || (bytes.toHex() == "618b0900"))
        ui->status->setText(tr("������ ���������� ������"));
    else if((bytes.toHex() == "61830a00") || (bytes.toHex() == "618b0a00"))
        ui->status->setText(tr("�������� 1 ����� �����"));
    else if((bytes.toHex() == "61830b00") || (bytes.toHex() == "618b0b00"))
        ui->status->setText(tr("�������� 2 ����� �����"));
    else if((bytes.toHex() == "61830d00") || (bytes.toHex() == "618b0d00"))
        ui->status->setText(tr("������ �������� ������ (�������� ����� ����� ���)"));
    else
    {
        ui->status->setText(tr("����������� �������"));
        return 2;
    }
    return 0;
}

/*�������, ���������� �� ���� ��������� ������ � � ������������ � �� ����������
������������ ������ ���*/
QBitArray SAEPC::getStatus()
{
    QBitArray bits(0);
    for(int i = 0; i < ui->treeWidget->topLevelItemCount(); i++)
    {
        QBitArray line(16);
        for(int j = 0; j < ui->treeWidget->topLevelItem(i)->childCount(); j++)
            line.setBit(j, ui->treeWidget->topLevelItem(i)->child(j)->checkState(0));
        bits = sum(bits, line);
    }
    return bits;
}

/*���������, ����������� �� ���� �����, ����� �����������, ���� ����������� � ������������� ����� - ����
� ������������ � ������ ��������� �������� ������ ��� � ���������� ���*/
void SAEPC::writeRequestMessage(QUdpSocket *socket, QHostAddress sender, quint16 senderPort, int flag)
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
        QBitArray controlSum(16);
        controlSum.fill(1, 0, 16);
        bits = sum(bits, getStatus());
        ui->treeWidget->topLevelItem(0)->child(0)->checkState(0) ? bits.setBit(16, 0) : bits.setBit(16, 1);
        bits = sum(bits, sum(controlSum, bitMinus(controlSum, resultSum(bits))));
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
void SAEPC::console(QString str, QByteArray byte)
{
    std::cout << "\n";
    if(ui->console->isChecked())
    {
        std::cout << str.toStdString() << "\n";
        printBitArray(toBits(byte));
    }
}

/*���������, ����������� �� ���� ������������� ����� state - ��������� �������� firstPort
� ������������ �� ��������� state ������ ���� ��� ��������� ���*/
void SAEPC::firstPortChanged(int state)
{
    if(state)
    {
        if(!socket_1->bind(QHostAddress::LocalHost, 10000))
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

/*���������, ����������� �� ���� ������������� ����� state - ��������� �������� firstPort
� ����������� �� ��������� state ������ ���� ��� ��������� ���*/
void SAEPC::secondPortChanged(int state)
{
    if(state)
    {
        if(!socket_2->bind(QHostAddress::LocalHost, 10001))
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

/*���������, �������� ���������, ���������� �� ������ ����
� ������������ �������� ���������*/
void SAEPC::readMessageFromFirstPort()
{
    QByteArray buffer;
    buffer.resize(socket_1->pendingDatagramSize());
    QHostAddress sender;
    quint16 senderPort;
    socket_1->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);
    console("***Message***", buffer);
    writeRequestMessage(socket_1, sender, senderPort, decode(buffer));
}

/*���������, �������� ���������, ���������� �� ������ ����
� ������������ �������� ���������*/
void SAEPC::readMessageFromSecondPort()
{
    QByteArray buffer;
    buffer.resize(socket_2->pendingDatagramSize());
    QHostAddress sender;
    quint16 senderPort;
    socket_2->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);
    console("***Message***", buffer);
    writeRequestMessage(socket_2, sender, senderPort, decode(buffer));
}

/*���������� ������*/
SAEPC::~SAEPC()
{
    delete ui;
}
