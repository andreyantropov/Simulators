#include "functions.h"

/*Функция, принимающая на вход два целых числа:
num - число, возводимое в степень
degree - степень числа
Возвращает возведенное в степень целое число*/
int pow(int num, int degree)
{
    int result = 1;
    for(int i = 0; i < degree; i++)
        result *= num;
    return result;
}

/*Функция, принимающая на вход массив бит bitArray
Преобразовывает его в целое число и возвращает*/
int toInt(QBitArray bitArray)
{
    int result = 0;
    for(int i = 0; i < bitArray.size(); i++)
        if(bitArray[i] == true)
            result += pow(2, i);
    return result;
}

/*Функция, принимающая на вход целое число num
Пребразовывает его в массив бит и возвращает*/
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

/*Функция, принимающая на вход два массива бит
Переводит их в целые числа, складывает, переводит результат
обратно в массив бит и возвращает*/
QBitArray bitSum(QBitArray bitArray1, QBitArray bitArray2)
{
    return toBit(toInt(bitArray1) + toInt(bitArray2));
}

/*Функция, принимающая на вход два массива бит
(предполагается, что первый массив состоит только из единиц)
Поэлементно вычитает из первого массива соответствующие
элементы второго*/
QBitArray bitMinus(QBitArray bitArray1, QBitArray bitArray2)
{
    QBitArray bits(16);
    for(int i = 0; i < bits.size(); i++)
        bits.setBit(i, bitArray1[i] - bitArray2[i]);
    return bits;
}

/*Функция, принимающая на вход массив бит bitArray
Возвращает массив бит - построчную сумму
массива bitArray*/
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

/*Функция, принимающая на вход массив байт bytes
Возвращает массив бит, образованный из массива bytes*/
QBitArray toBits(QByteArray bytes)
{
    QBitArray bits(bytes.count() * 8);
    for(int i = 0; i < bytes.count(); i++)
        for(int j = 0; j < 8; j++)
            bits.setBit(i*8 + j, bytes.at(i)&(1 << j));
    return bits;
}

/*Функция, принимающая на вход массив бит bits
Возвращает массив байт, образованный из массива bits*/
QByteArray toBytes(QBitArray bits)
{
    QByteArray bytes;
    for(int i = 0; i < bits.count(); i++)
        bytes[i/8] = (bytes.at(i/8) | ((bits[i] ? 1 : 0) << (i%8)));
    return bytes;
}

/*Функция, принимающая два массива бит first, second
Возвращает массив бит - сумму first и second*/
QBitArray sum(QBitArray first, QBitArray second)
{
    QBitArray result(first.size() + second.size());
    for(int i = 0; i < first.size(); i++)
        result.setBit(i, first[i]);
    for(int i = first.size(); i < first.size() + second.size(); i++)
        result.setBit(i, second[i - first.size()]);
    return result;
}

/*Процедура, принимающая на вход массив бит
Выводит его на экран (по 16 символов в строке)*/
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
