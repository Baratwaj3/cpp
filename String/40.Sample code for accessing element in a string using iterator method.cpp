#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "TODAY";
    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        cout << *it;
    }
    return 0;
    // by declearing *it+=32
    // we can print it in lower case 
}
/*

output:

TODAY

*/