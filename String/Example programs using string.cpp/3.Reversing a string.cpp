#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "Engineering";
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;
    return 0;
}
/*
Reversed string: gnireenignE
*/