
#include <iostream>
#include <fstream>
#include <string>


void get_mg(float *weight)
{
    *weight *= 9.8;
}



std::string get_answer(float *weight, float *ft)
{
    if(*weight > *ft)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}


void write_data_out(std::ofstream *file, std::string *answer, float *weight)
{
    *file << *weight << "\n" << *answer << "\n";
}


int main() {
    
    float weight = 0;
    float ft = 0;
    
    std::ifstream data_in("in.txt", std::ios::in);
    std::ofstream data_out("out.txt");
    
    if(data_in.is_open())
    {
        data_in >> weight >> ft;
        data_in.close();
    }
    else
    {
        std::cout << "\nfile is not open\n";
    }
    
    get_mg(&weight);
    std::string answer = get_answer(&weight, &ft);
    write_data_out(&data_out, &answer, &weight);
    
}
