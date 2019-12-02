#ifndef SUTVR_H
#define SUTVR_H

#include <QMainWindow>
#include <functions.h>
#include <QUdpSocket>
#include <QBitArray>
#include <QTreeWidget>
#include <QTextCodec>
#include <iostream>

namespace Ui {
class SUTVR;
}

class SUTVR : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit SUTVR(QWidget *parent = 0);
    ~SUTVR();
    
private:
    Ui::SUTVR *ui; //����������� ���� ����������
    QUdpSocket *socket_1, *socket_2; //������ ��� ������/�������� ���������

    void isReady(); //���������, ����������� ������� ��������������

    int decode(QByteArray bytes); //���������, ���������������� ��������� � �������� ������ SUTVR

    void console(QString str, QByteArray byte); //���������, ��������� ��������� � �������

    void writeRequestMessage(QUdpSocket *socket, QHostAddress sender, quint16 senderPort, int flag); //���������, ������������ �������� ���������

private slots:
    void treeStatusChanged(QTreeWidgetItem* item, int col); //���������, �������� �� ����������� � �������� QTreeWidget
    void firstPortChanged(int state); //���������, �������� �� ���������� ������� �����
    void secondPortChanged(int state); //���������, �������� �� ���������� ������� �����
    void readMessageFromFirstPort(); //��������� ������-�������� ��������� ������� �����
    void readMessageFromSecondPort(); //��������� ������-�������� ��������� ������� �����
};

#endif // SUTVR_H
