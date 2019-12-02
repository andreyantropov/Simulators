#include "functions.h"

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
