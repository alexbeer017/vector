#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
std::ostream & operator << (std::ostream & os, const std::vector<T> & vec)
{
    for(auto elem : vec)
    {
        os<<elem<< " ";
    }
    return os;
}
int main()
{
    std::vector<int> vec_of_nums{1, 3, 4, 7, 8, 9};
    std::cout<<vec_of_nums << std::endl;
    return 0;
}
