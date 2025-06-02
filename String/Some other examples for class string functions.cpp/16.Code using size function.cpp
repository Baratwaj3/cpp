#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "apple";
    string b = "banana";
    if (a.size() > b.size())
        cout << "String a is longer" << endl;
    else
        cout << "String b is longer" << endl;
    return 0;
}
