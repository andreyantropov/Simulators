#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <QBitArray>
#include <iostream>

QBitArray toBits(QByteArray bytes); //Функция, преобразующая массив бит в массив байт
QByteArray toBytes(QBitArray bits); //Функция, преобразующая массив байт в массив бит
QBitArray sum(QBitArray first, QBitArray second); //Функция, складывающая два элемента QBitArray
void printBitArray(QBitArray bitArray); //Процедура, печатающая QBitArray

#endif // FUNCTIONS_H
