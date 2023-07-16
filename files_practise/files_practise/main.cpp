//
//  main.cpp
//  files_practise
//
//  Created by Максим Мержев on 10.03.2023.
//


#include <iostream>
#include <fstream>

void print_zip_signature(char zip[])
{
    std::cout << std::hex << "sign: " << *(unsigned int*)(zip+0) << "\n";
    std::cout << std::hex << "version: " << *(unsigned short*)(zip+4) << "\n";
    std::cout << std::hex << "flag: " << *(unsigned short*)(zip+6) << "\n";
    std::cout << std::hex << "comp: " << *(unsigned short*)(zip+8) << "\n";
    std::cout << std::hex << "lastTime: " << *(unsigned short*)(zip+10) << "\n";
    std::cout << std::hex << "lastDate: " << *(unsigned short*)(zip+12) << "\n";
    std::cout << std::hex << "crc: " << *(unsigned int*)(zip+14) << "\n";
    std::cout << std::hex << "sizec: " << *(unsigned int*)(zip+18) << "\n";
    
    unsigned lenName = *(unsigned short*)(zip+26);
    unsigned lenF = *(unsigned short*)(zip+28);
    
    
    std::cout <<"fName: ";
    
    for(short i = 0; i<lenName; i++)
    {
        std::cout << zip[30+i];
    }
    
    std::cout <<"\n";
    
    std::cout <<"ef: ";
    
    for(short i = 0; i<lenF; i++)
    {
        std::cout << zip[30+ lenName +i];
    }
    
    std::cout <<"\n";
}


int main() {
    
    std::ifstream file("test.zip", std::ios::binary);

    if(file.is_open())
    {
        std::cout << "File is open\n";
        unsigned long int size = 128;
        char memblock[size];
        file.read(memblock, size);
        file.close();
        print_zip_signature(memblock);
    }
    else
    {
        std::cout << "File is not open\n";
    }
    
    
   
    
}
