#ifndef SAEPC_H
#define SAEPC_H

#include "functions.h"
#include <QMainWindow>
#include <QUdpSocket>
#include <QBitArray>
#include <QTreeWidget>
#include <QTextCodec>
#include <iostream>

namespace Ui {
class SAEPC;
}

class SAEPC : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit SAEPC(QWidget *parent = 0);
    ~SAEPC();
    
private:
    Ui::SAEPC *ui; //����������� ���� ����������
    QUdpSocket *socket_1, *socket_2; //UDP ������

    int decode(QByteArray bytes); //�������, ���������������� �������� �������

    QBitArray getStatus(); //�������, ����������� ������ ��� � ������������ � ���������� "��������"

    void console(QString str, QByteArray byte); //���������, ��������� ��������� � �������

    void writeRequestMessage(QUdpSocket *socket, QHostAddress sender, quint16 senderPort, int flag); //���������, �������� �������� ���������

private slots:
    void firstPortChanged(int state); //���������, ������������� ��������� �������� "������ �����"
    void secondPortChanged(int state); //���������, �������������� ��������� �������� "������ �����"
    void readMessageFromFirstPort(); //���������, ����������� ������ �� ������ ����
    void readMessageFromSecondPort(); //���������, ����������� ������ �� ������ ����
};

#endif // SAEPC_H
