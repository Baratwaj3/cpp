#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    if (str.empty())
    {
        cout << "The string is empty" << endl;
    }
    else
    {
        cout << "The given string is :" << str << endl;
    }
    return 0;
}

/*
output_1:

Enter a string : HELLO
The given string is :HELLO

output_2:

Enter a string : 
The string is empty

*/