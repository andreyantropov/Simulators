#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <QBitArray>
#include <iostream>

QBitArray toBits(QByteArray bytes); //�������, ������������� ������ ��� � ������ ����
QByteArray toBytes(QBitArray bits); //�������, ������������� ������ ���� � ������ ���
QBitArray sum(QBitArray first, QBitArray second); //�������, ������������ ��� �������� QBitArray
void printBitArray(QBitArray bitArray); //���������, ���������� QBitArray

#endif // FUNCTIONS_H
