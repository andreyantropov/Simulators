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
    Ui::SUTVR *ui; //Графическое окно приложения
    QUdpSocket *socket_1, *socket_2; //Сокеты для приема/передачи сообщений

    void isReady(); //Процедура, проверяющая наличие неисправностей

    int decode(QByteArray bytes); //Процедура, расшифровывающая сообщения и меняющая статус SUTVR

    void console(QString str, QByteArray byte); //Процедура, выводящая сообщения в консоль

    void writeRequestMessage(QUdpSocket *socket, QHostAddress sender, quint16 senderPort, int flag); //Процедура, отправляющая ответное сообщение

private slots:
    void treeStatusChanged(QTreeWidgetItem* item, int col); //Процедура, следящая за изменениями в элементе QTreeWidget
    void firstPortChanged(int state); //Процедура, следящая за состоянием первого порта
    void secondPortChanged(int state); //Процедура, следящая за состоянием второго порта
    void readMessageFromFirstPort(); //Процедура приема-отправки сообщений первого порта
    void readMessageFromSecondPort(); //Процедура приема-отправки сообщений второго порта
};

#endif // SUTVR_H
