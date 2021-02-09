/**Alex Beer
 * CS.201
 * Jon Genetti
 * 2/8/2021
 * Vector.cpp is pretty much just a print statement but I use vectors. In the example you used names I hope numbers works if not let me know.
 */

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
