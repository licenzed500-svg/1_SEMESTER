//
//  main.cpp
//  string's
//
//  Created by Максим Мержев on 07.02.2023.
//  Xcode on macOS Ventura 13.2

#include <iostream>
#include <string>



std::string str_in(std::string str)
{
    std::cout << "enter str:";
    std::cin >> str;
    std::cout << "\n";
    return str;
}

void str_out(std::string *str)
{
    std::cout << "\n" << *str << "\n";
}

short str_length(std::string str)
{
    return str.length();
}


bool check_str(short *str_len)
{
    if(*str_len>10)
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::string rebuild_string(std::string str, bool *check)
{
    if(*check == true)
    {
        str.erase(6, str.length());
    }
    else if(*check == false)
    {
        do
        {
            str.append("o");
        }while(str.length()!=12);
    }
    return str;
}

int main() {
    std::string str = "";
    str = str_in(str);
    short strLen = str_length(str);
    bool check = check_str(&strLen);
    str = rebuild_string(str, &check);
    str_out(&str);
}
