
#include <iostream>
#include <vector>

using std::vector;

void add_item(vector<int> &array, int *i)
{
    do
    {
        array.push_back(1);
        *i = *i+1;
        std::cout << *i << "\n";
    }while(*i<10);
}


int main() {
    vector<int> my_vector;
    int i = 0;
    add_item(my_vector, &i);
    std::cout << my_vector.size();
    //std:: cout << "\n\n\n" << my_vector[] << "\n";
}
