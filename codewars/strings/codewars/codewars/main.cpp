#include <string>
#include <vector>
#include <cstring>

void char_array(char *array, short array_size, std::string &s)
{
    for(short i = 0; i<array_size;i++)
    {
        array[i] = s[i];
    }
}

std::vector<std::string> solution(const std::string &s)
{
    const short arr_length = s.length();
    char array[arr_length];
    char_array(array, arr_length, &s);
   
}

int main()
{
    
}

