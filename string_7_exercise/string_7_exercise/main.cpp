//
//  main.cpp
//  string_7_exercise
//
//  Created by Максим Мержев on 14.02.2023.
//

#include <iostream>
#include <string>
#include <vector>



void vector_out(std::vector<short> &data)
{
    for(auto&& vector_data: data)
    {
        std::cout << "\n" << vector_data;
    }
}



void found_max(std::string str)
{
    const char target_sumbol = ' ';
    short counter = 0;
    std::vector<short> str_lens;
    bool isFirstSpace = true;
    for(unsigned short i = 0; i<str.length(); i++)
    {
        if(str[i] == target_sumbol)
        {
            if(isFirstSpace)
            {
                str_lens.push_back(i);
                counter = i;
                isFirstSpace = false;
            }
            else
            {
                str_lens.push_back(i-counter-1);
            }
        }
    }
    vector_out(str_lens);
}

int main() {
    std::string str = "LoremIpsur lorem Ipsur IpsurLoremDolor";
    found_max(str);
}
