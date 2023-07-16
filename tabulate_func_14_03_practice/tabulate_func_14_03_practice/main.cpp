

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>


void func(float *t_0, float *dt, float *tf, float *y)
{
    *y = 2*sin(4*(*t_0)+1);
}

void tabulate(float *t_0, float *dt, float *tf, std::vector<float> &y_variables)
{
    
    float y = 0;
    do{
        func(t_0, dt, tf, &y);
        *t_0 += *tf;
        y_variables.push_back(y);
    } while(*t_0 != *dt);
    
}

void write_file(std::ofstream *file, std::vector<float> &y_variables)
{
    for(auto i: y_variables)
    {
        *file << "y is:" << i << "\n";
    }
}

int main()
{
    float t_0 = 0;
    float dt = 0;
    float tf = 0;
    
    std::vector<float> y_variables;
    
    std::ifstream tab_data_in("in.txt", std::ios::in);
    std::ofstream tab_data_out("out.txt");
    
    if(tab_data_in.is_open())
    {
        tab_data_in >> t_0 >> dt >> tf;
        tab_data_in.close();
    }
    tabulate(&t_0, &dt, &tf, y_variables);
    write_file(&tab_data_out, y_variables);
}
