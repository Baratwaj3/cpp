#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "madam";
    string rev = string(str.rbegin(), str.rend());

    if (str == rev)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;
    return 0;
}
/*
madam is a palindrome.
*/