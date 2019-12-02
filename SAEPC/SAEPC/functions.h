#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <QBitArray>
#include <iostream>
#include <QUdpSocket>

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

#endif // FUNCTIONS_H
