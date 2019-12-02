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
    Ui::SAEPC *ui; //Графическое окно приложения
    QUdpSocket *socket_1, *socket_2; //UDP сокеты

    int decode(QByteArray bytes); //Функция, расшифровывающая входящую команду

    QBitArray getStatus(); //Функция, заполняющая массив бит в соответствии с состоянием "датчиков"

    void console(QString str, QByteArray byte); //Процедура, выводящая сообщения в консоль

    void writeRequestMessage(QUdpSocket *socket, QHostAddress sender, quint16 senderPort, int flag); //ПРоцедура, выдающая ответное сообщение

private slots:
    void firstPortChanged(int state); //Процедура, отслеживающая изменения чекбокса "Первый адрес"
    void secondPortChanged(int state); //Процедура, отсвлеживающая изменения чекбокса "Второй адрес"
    void readMessageFromFirstPort(); //Процедура, принимающая пакеты на первый порт
    void readMessageFromSecondPort(); //Процедура, принимающая пакеты на второй порт
};

#endif // SAEPC_H
