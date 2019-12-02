#ifndef SAOTP_H
#define SAOTP_H

//#include "functions.h"
#include <QObject>
#include <QUdpSocket>
#include <QMainWindow>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QTextCodec>
#include <QRadioButton>
#include <QGroupBox>
#include <QVector>
#include <QBitArray>
#include <iostream>

namespace Ui {
class SAOTP;
}

class SAOTP : public QMainWindow
{
    Q_OBJECT

public:
    explicit SAOTP(QMainWindow *parent = 0);
    ~SAOTP();
private:
    QVector<QButtonGroup*> vec; //������, �������� ��������� RadioButton'��
    QUdpSocket *socket_1, *socket_2; //UDP ������
    Ui::SAOTP *ui; //����������� ����

    int decode(QByteArray bytes); //�������, ���������������� ��������� ���������

    QBitArray getStatus(); //�������, ����������� ������ ��� � ����������� � ���������� "��������"

    QBitArray getCheckBoxStatus(); //�������, ����������� ������ ��� � ����������� � ���������� ���������
    QBitArray getRadioButtonStatus(); //�������, ����������� ������ ��� � ����������� � ���������� �����������

    void writeRequestMessage(QUdpSocket *socket, QHostAddress sender, quint16 senderPort, int flag); //���������, ������������ �������� ���������

    void console(QString str, QByteArray byte); //���������, ��������� ��������� � �������

    void addRadio();//���������, ����������� � ������ RadioButton'�

    int pow(int num, int degree); //�������, ���������� ����� � �������
    int toInt(QBitArray bitArray); //�������, ������������� ������ ��� � ����� �����
    QBitArray toBit(int num); //�������, ������������� ����� ����� � ������ ���
    QBitArray bitSum(QBitArray bitArray1, QBitArray bitArray2); //�������, ����������� ��� ������� �������
    QBitArray bitMinus(QBitArray bitArray1, QBitArray bitArray2); //�������, ���������� �� ������ ������� ��� (������ ������ ��) ������ ������ ���
    QBitArray resultSum(QBitArray bitArray); //�������, ��������� ��
    QBitArray toBits(QByteArray bytes); //�������, ������������� ������ ��� � ������ ����
    QByteArray toBytes(QBitArray bits); //�������, ������������� ������ ���� � ������ ���
    QBitArray sum(QBitArray first, QBitArray second); //�������, ����������� ���� ������ ��� � ����� �������
    void printBitArray(QBitArray bitArray); //���������, ���������� QBitArray
private slots:
    void readMessageFromFirstPort();//���������, �������� ��������� � ������� �����
    void readMessageFromSecondPort();//���������, �������� ��������� �� ������� �����
    void firstPortChanged(int state);//���������, �������� �� ���������� �������� firstPort
    void secondPortChanged(int state);//���������, �������� �� ���������� �������� secondPort
};

#endif // SAOTP_H
