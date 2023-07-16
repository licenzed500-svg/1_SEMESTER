//
//  main.cpp
//  task_175
//
//  Created by Максим Мержев on 28.02.2023.



//  преобразовать матрицу: элементы строки в которой находится минимальный элемент матрицы заменить 0

#include <iostream>
#include <time.h>
#include <vector>


struct min_element
{
    short i = 0;
    short j = 0;
};



void make_matrix(std::vector<std::vector<short>> &array)
{
    const short min = 10;
    const short max = 100;
    for(short i = 0; i<array.size(); i++)
    {
        for(short j = 0; j<array[i].size(); j++)
        {
            array[i][j] = min + rand() % (max-min);
        }
    }
}



void matrix_min(std::vector<std::vector<short>> &array, min_element *min)
{
    short max_element = array[0][0];
    for(short i = 0; i<array.size(); i++)
    {
        for(short j = 0; j<array[i].size(); j++)
        {
            if(array[i][j] > max_element)
            {
                min->i = i;
                min->j = j;
            }
        }
    }
}



void out_matrix(std::vector<std::vector<short>> &array)
{
    for(short i = 0; i<array.size(); i++)
    {
        for(short j = 0; j<array[i].size(); j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << "\n";
    }
}



void change_matrix_elements(std::vector<std::vector<short>> &array, min_element *min)
{
    for(short j = 0; j<array[min->i].size(); j++)
    {
        array[j][min->i] = 0;
    }
}



int main() {
    
    srand(time(NULL));
    min_element min;
    
    const short array_cols_rows = 3;
    std::vector<std::vector<short>> matrix (array_cols_rows , std::vector<short> (array_cols_rows) );
    
    make_matrix(matrix);
    matrix_min(matrix, &min);
    out_matrix(matrix);
    change_matrix_elements(matrix, &min);
    
    std::cout << "\n";
    
    out_matrix(matrix);
}
