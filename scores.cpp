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
