#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <QBitArray>
#include <iostream>
#include <QUdpSocket>

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

#endif // FUNCTIONS_H
