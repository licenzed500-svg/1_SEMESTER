//
//  main.cpp
//  files_stream
//
//  Created by Максим Мержев on 10.03.2023.
//

#include <iostream>
#include <fstream>
#include <string>

void get_parametrs_from_file(int *argument)
{
    std::ifstream input_file("in.txt");
    std::string str;
    while(input_file >> str >> *argument)
    {
        std::cout << *argument << "\n";
    }
    input_file.close();
    std::cout << "\n" << *argument << "\n";
}


void get_step_counter(int* step_counts)
{
    std::cout << "enter steps count:";
    std::cin >> *step_counts;
    std::cout << "\n";
}



int main()
{
    int argument = 0;
    int steps = 0;
    
    
    get_step_counter(&steps);
    get_parametrs_from_file(&argument);
    
}
