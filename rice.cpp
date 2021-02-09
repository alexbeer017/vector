/**Alex Beer
 * CS.201
 * Jon Genetti
 * 2/8/2021
 * Rice.cpp is pretty much just squaring the previous number and having a cap at 1000000000
 */

#include <iostream>

using namespace std;

int main()
{
    double square = 2;
    double rice = 2;
    while (rice < 1000000000) //cap
    {
        rice *= 2;  //math
        cout << "There is " << rice << " pieces of rice that the inventor owns at square "  //print statement
             << square << endl;
        cout << "\n";
        square++;  //more math
    }
}
