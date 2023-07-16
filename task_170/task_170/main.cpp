
//Данна матрица, составить алгоритм находящий количество элементов значение которых больше 40

#include <iostream>
#include <time.h>
#include <vector>



void make_matrix(std::vector<std::vector<short>> &array)
{
    const short min = 10;
    const short max = 100;
    for(short i = 0; i<array.size(); i++)
    {
        for(short j = 0; j<array[i].size(); j++)
        {
            array[i][j] = (min + rand() % (max-min));
        }
    }
}


short summ_matrix(std::vector<std::vector<short>> &array)
{
    short count_elements = 0;
    for(short i = 0; i<array.size(); i++)
    {
        for(short j = 0; j<array[i].size(); j++)
        {
            if( (array[i][j] <= 90) && (array[i][j]>=30) )
            {
                count_elements++;
            }
        }
    }
    return count_elements;
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



int main() {
    srand(time(NULL));
    
    const short array_cols_rows = 3;
    
    std::vector<std::vector<short>> matrix (array_cols_rows , std::vector<short> (array_cols_rows) );
    
    make_matrix(matrix);
    
    short count_elements = summ_matrix(matrix);
    
    out_matrix(matrix);
    
    std::cout << "\n" << count_elements << "\n\n";
    
}
