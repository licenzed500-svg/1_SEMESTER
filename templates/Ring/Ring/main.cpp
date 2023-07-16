//
//  main.cpp
//  Ring
//
//  Created by Максим Мержев on 17.01.2023.
//

#include <iostream>
#include <array>

std::array<int, 3> ShiftLeft3(std::array<int,3> array, int arr_size)
{
   
    for (short i = 0; i < arr_size-1; i++)
    {
        std::swap(array[i], array[i + 1]);
    }
    return array;
}

void out(std::array<int,3> array, int arr_size)
{
    for (short i = 0; i < arr_size; i++)
    {
        std::cout << array[i] << std::endl;
    }
}

std::array<int, 10> gen_arr(std::array<int,10> array, int arr_size)
{
    int min = 0;
    int max = 10;
    int range = max+min-1;
    for(int i = 0; i<10; i++)
    {
        array[i] = rand() % range+min;
    }
    return array;
}

int main() {
    srand(0);
    std::array<int, 3> arr1 = {1,2,3};
    std::array<int, 3> arr2 = {4,5,6};
    std::array<int, 10> arr_rand;
    arr1 = ShiftLeft3(arr1, 3);
    arr2 = ShiftLeft3(arr2, 3);
    arr_rand=gen_arr(arr_rand, 10);
    out(arr1,3);
    out(arr2,3);
}
