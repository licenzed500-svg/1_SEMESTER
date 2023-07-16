
#include <iostream>
#include <string>
#include <array>


struct People
{
    std::string lastname;
    int age;
    std::string gender;
};

int countW(std::array<People,10> peoples)
{
    int w = 0;
    for(int i = 0; i<10; i++)
    {
        if(peoples[i].gender == "W")
        {
            w++;
        }
    }
    return w;
}

int countM(std::array<People,10> peoples)
{
    int m = 0;
    for(int i = 0; i<10; i++)
    {
        if(peoples[i].gender == "M")
        {
            m++;
        }
    }
    return m;
}

std::array<People, 10> fill(std::array<People,10> peoples)
{
    for(int i = 0; i<10; i++)
    {
        std::string gender;
        std::cout << "W or M?:" << std::endl ;
        std::cin >> gender;
        if(gender == "M")
        {
            peoples[i].gender = "M";
        }
        else
        {
            peoples[i].gender = "W";
        }
    }
    return peoples;
}

int main() {
    std::array <People, 10> peoples;
    fill(peoples);
    int men = countM(peoples);
    int women = countW(peoples);
    std::cout << "men is:" << men << std::endl;
    std::cout << "women is:" << women << std::endl;
}
