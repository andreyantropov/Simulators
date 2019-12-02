#include "functions.h"

/*�������, ����������� �� ���� ��� ����� �����:
num - �����, ���������� � �������
degree - ������� �����
���������� ����������� � ������� ����� �����*/
int pow(int num, int degree)
{
    int result = 1;
    for(int i = 0; i < degree; i++)
        result *= num;
    return result;
}

/*�������, ����������� �� ���� ������ ��� bitArray
��������������� ��� � ����� ����� � ����������*/
int toInt(QBitArray bitArray)
{
    int result = 0;
    for(int i = 0; i < bitArray.size(); i++)
        if(bitArray[i] == true)
            result += pow(2, i);
    return result;
}

/*�������, ����������� �� ���� ����� ����� num
�������������� ��� � ������ ��� � ����������*/
QBitArray toBit(int num)
{
    QBitArray bits(16);
    int step = 0;
    while(num)
    {
        bits.setBit(step, num%2);
        num /= 2;
        step++;
    }
    return bits;
}

/*�������, ����������� �� ���� ��� ������� ���
��������� �� � ����� �����, ����������, ��������� ���������
������� � ������ ��� � ����������*/
QBitArray bitSum(QBitArray bitArray1, QBitArray bitArray2)
{
    return toBit(toInt(bitArray1) + toInt(bitArray2));
}

/*�������, ����������� �� ���� ��� ������� ���
(��������������, ��� ������ ������ ������� ������ �� ������)
����������� �������� �� ������� ������� ���������������
�������� �������*/
QBitArray bitMinus(QBitArray bitArray1, QBitArray bitArray2)
{
    QBitArray bits(16);
    for(int i = 0; i < bits.size(); i++)
        bits.setBit(i, bitArray1[i] - bitArray2[i]);
    return bits;
}

/*�������, ����������� �� ���� ������ ��� bitArray
���������� ������ ��� - ���������� �����
������� bitArray*/
QBitArray resultSum(QBitArray bitArray)
{
    QBitArray bits(0);
    for(int i = 1; i < bitArray.size()/16; i++)
    {
        QBitArray buffer(16);
        for(int j = 0; j < 16; j++)
            buffer.setBit(j, bitArray[i * 16 + j]);
        bits = bitSum(bits, buffer);
    }
    return bits;
}

/*�������, ����������� �� ���� ������ ���� bytes
���������� ������ ���, ������������ �� ������� bytes*/
QBitArray toBits(QByteArray bytes)
{
    QBitArray bits(bytes.count() * 8);
    for(int i = 0; i < bytes.count(); i++)
        for(int j = 0; j < 8; j++)
            bits.setBit(i*8 + j, bytes.at(i)&(1 << j));
    return bits;
}

/*�������, ����������� �� ���� ������ ��� bits
���������� ������ ����, ������������ �� ������� bits*/
QByteArray toBytes(QBitArray bits)
{
    QByteArray bytes;
    for(int i = 0; i < bits.count(); i++)
        bytes[i/8] = (bytes.at(i/8) | ((bits[i] ? 1 : 0) << (i%8)));
    return bytes;
}

/*�������, ����������� ��� ������� ��� first, second
���������� ������ ��� - ����� first � second*/
QBitArray sum(QBitArray first, QBitArray second)
{
    QBitArray result(first.size() + second.size());
    for(int i = 0; i < first.size(); i++)
        result.setBit(i, first[i]);
    for(int i = first.size(); i < first.size() + second.size(); i++)
        result.setBit(i, second[i - first.size()]);
    return result;
}

/*���������, ����������� �� ���� ������ ���
������� ��� �� ����� (�� 16 �������� � ������)*/
void printBitArray(QBitArray bitArray)
{
    for(int i = 0; i < bitArray.size()/16; i++)
    {
        for(int j = 15 + i * 16; j >= 0 + i * 16; j--)
            std::cout << bitArray[j];
        std::cout << "\n";
    }
    std::cout << "\n" << "\n";
}
