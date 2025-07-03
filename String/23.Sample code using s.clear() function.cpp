#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "HELLO WORLD";
    int len_1 = str.length();
    cout << "The length of the string is: " << len_1 << endl;

    str.clear();
    
    int len_2 = str.length();
    cout << "The length of the string after clear is: " << len_2 << endl;
    return 0;
}