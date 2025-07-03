#include <iostream>
using namespace std;
int main()
{
    string str_1 = "HELLO WORLD";
    cin >> str_1;
    cout << str_1 << endl;

    string str_2="HELLO WORLD";
    cin>>str_2; // gets HELLO from the keyboard
    cout<<str_2;
    cin>>str_2; // gets WORLD from the keyboard
    cout>>str_2;

    string str_3 = "HELLO WORLD";
    cin.ignore(); // clears the newline left in the buffer
    getline(cin, str_3);
    cout << str_3 << endl;

    return 0;
}
/*
output:

HELLO
HELLO WORLD
HELLO WORLD

*/