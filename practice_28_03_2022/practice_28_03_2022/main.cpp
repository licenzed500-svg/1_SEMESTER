//
//  main.cpp
//  practice_28_03_2022
//
//  Created by Максим Мержев on 28.03.2023.
//
/*  обьявить указатель на массив типа double, размер массива вводит пользователь написать 4 функции первая выделяет память вторая заполняет третья показывает данные массива четвертая освобождает память   */


#include <iostream>
#include <time.h>
#include <vector>

unsigned short getSize()
{
    unsigned short size;
    std::cout << "enter arr size:";
    std::cin >> size;
    std::cout << "\n";
    return size;
}

double getNum()
{
    double min = -10.2;
    double max = 20.5;
    
    double result = min + rand() / (max-min);
    return result;
}

void fillArray(std::vector<double> &vec, unsigned short *size)
{
    double result = 0;
    for(auto i = 0; i<*size; i++)
    {
        result = getNum();
        vec.push_back(result);
    }
}

void showArray(std::vector<double> &vec, unsigned short *size)
{
    for(auto i = 0; i<*size; i++)
    {
        std::cout << vec.at(i) << "\n";
    }
}

void clearMemory(std::vector<double> &vec)
{
    vec.clear();
}



int main() {
    srand(time(NULL));
    
    
1    unsigned short size = getSize();
    
    std::vector<double> vec(size);
    
    fillArray(vec,&size);
    showArray(vec, &size);
    clearMemory(vec);
}





