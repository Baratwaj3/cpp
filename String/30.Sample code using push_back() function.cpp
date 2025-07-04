#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "HOW ARE YOU ";
    str.push_back('z');
    cout << "String after get added by single char: " << str << endl;
    return 0;
}
/*
output:
String after get added by single char: HOW ARE YOU z
*/
