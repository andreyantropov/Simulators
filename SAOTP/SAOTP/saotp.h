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
    QVector<QButtonGroup*> vec; //Вектор, хранящий состояние RadioButton'ов
    QUdpSocket *socket_1, *socket_2; //UDP сокеты
    Ui::SAOTP *ui; //Графическое окно

    int decode(QByteArray bytes); //Функция, расшифровывающая пришедшее соббщение

    QBitArray getStatus(); //Функция, заполняющая массив бит в зависимости с состоянием "датчиков"

    QBitArray getCheckBoxStatus(); //Функция, заполняющая массив бит в зависимости с состоянием Чекбоксов
    QBitArray getRadioButtonStatus(); //Функция, заполняющая массив бит в зависимости с состоянием радиобоксов

    void writeRequestMessage(QUdpSocket *socket, QHostAddress sender, quint16 senderPort, int flag); //Процедура, отправляющая ответные сообщения

    void console(QString str, QByteArray byte); //Процедура, выводящая сообщения в консоль

    void addRadio();//Процедура, добавляющая в дерево RadioButton'ы

    int pow(int num, int degree); //Функция, возводящая число в степень
    int toInt(QBitArray bitArray); //Функция, преобразующая массив бит в целое число
    QBitArray toBit(int num); //Функция, преобразующая целое число в массив бит
    QBitArray bitSum(QBitArray bitArray1, QBitArray bitArray2); //Функция, суммирующая два битовых массива
    QBitArray bitMinus(QBitArray bitArray1, QBitArray bitArray2); //Функция, вычитающая из одного массива бит (массив единиц КС) другой массив бит
    QBitArray resultSum(QBitArray bitArray); //Функция, считающая КС
    QBitArray toBits(QByteArray bytes); //Функция, преобразующая массив бит в массив байт
    QByteArray toBytes(QBitArray bits); //Функция, преобразующая массив байт в массив бит
    QBitArray sum(QBitArray first, QBitArray second); //Функция, добавляющая один массив бит в конец другого
    void printBitArray(QBitArray bitArray); //Процедура, печатающая QBitArray
private slots:
    void readMessageFromFirstPort();//Процедура, читающая сообщения с первого порта
    void readMessageFromSecondPort();//Процедура, читающая сообщения со второго порта
    void firstPortChanged(int state);//Процедура, следящая за состоянием чекбокса firstPort
    void secondPortChanged(int state);//Процедура, следящая за состоянием чекбокса secondPort
};

#endif // SAOTP_H
