//
//  main.cpp
//  tabulation
//
//  Created by Максим Мержев on 17.01.2023.
//

#include <iostream>
#include <array>

void array_out(std::array<int,10> array)
{
    for(int i = 0; i<10; i++)
    {
        std::cout << array[i] << std::endl;
    }
}

std::array<int, 10> genereate_array(std::array<int,10> array)
{
    int min = 0;
    int max = 10;
    int range = max+min-1;
    for(int i = 0; i<10; i++)
    {
        array[i] = rand() % range + min;
    }
    return array;
}



int main()
{
    srand(0);
    std::array<int,10> array = genereate_array(array);
    array_out(array);
}
