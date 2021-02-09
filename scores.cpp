/**Alex Beer
 * CS.201
 * Jon Genetti
 * 2/8/2021
 * Score.cpp was the hardest code I've written I think I really struggled with it
 * but pretty much enter a name and number as many times as you want then type stop twice
 */

#include <string>
#include <iostream>
#include <map>

using namespace std;


typedef map<string,int> MSI;

int main()
{
    cout <<"enter a name and number after type stop twice" << endl;
    MSI score;
    string si;
    int sc;
    while( cin>>si>>sc )
        score[si] = score[si] + sc;
    for( MSI::iterator p= score.begin(); p!=score.end(); p++)
        cout << (*p).first << "\t" << (*p).second <<endl;

}
