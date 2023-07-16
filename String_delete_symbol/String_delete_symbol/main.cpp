//
//  main.cpp
//  String_delete_symbol
//
//  Created by Максим Мержев on 14.02.2023.
//

#include <iostream>
#include <string>
#include <vector>



void str_out(std::string str)
{
    for(char i : str)
    {
        std::cout << i;
    }
}



std::string delete_char_(std::string str, std::vector<char> delete_char)
{
    for(unsigned short i = 0; i<delete_char.size(); i++)
    {
        str.erase(str.find(delete_char.at(i)));
    }
    return str;
}



std::vector<char> save_char(std::string str, std::vector<char> delete_char)
{
    for(unsigned short i = 0; i<str.length(); i+=2)
    {
        delete_char.push_back(str[i]);
    }
    return delete_char;
}



int main()
{
    std::string str = "Lorem Ipsur Dolor";
    std::vector<char> to_delete;
    to_delete = save_char(str, to_delete);
    str = delete_char_(str, to_delete);
    str_out(str);
}
