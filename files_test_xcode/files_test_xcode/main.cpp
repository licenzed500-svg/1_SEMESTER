//
//  main.cpp
//  files_test_xcode
//
//  Created by Максим Мержев on 12.03.2023.
//

#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
    std::ofstream file("Empty.zip");
    if(file.is_open())
    {
        std::cout << "file is open\n";
    }
    else
        std::cout << "file is not open\n";
}
