//
//  main.cpp
//  Practise_24_03_2023
//
//  Created by Максим Мержев on 24.03.2023.
//



#include <iostream>
#include <time.h>
#include <vector>

unsigned short getArrSize()
{
    unsigned short result;
    std::cin >> result;
    return result;
}

signed short randomElement()
{
    const signed short min = -10;
    const unsigned short max = 20;
    
    signed short result = min+rand() % (max-min);
    return result;
}


void setRandElements(std::vector<double> &arr, unsigned const short arrSize)
{
    for(auto i = 0; i<arrSize; i++)
    {
        arr.push_back(randomElement());
    }
}

void dataOut(std::vector<double> &arr)
{
    for(auto i = 0; i<arr.size(); i++)
    {
        std::cout << arr.at(i) << "\n";
    }
}

double func(std::vector<double> &arrP, int size, double x)
{
    
}

int main(int argc, const char * argv[]) {
    
    srand(time(NULL));
    
    std::vector<double> arrP;
    
    unsigned short arrSize = getArrSize();
    
    setRandElements(arrP, arrSize);
    
    dataOut(arrP);
}
