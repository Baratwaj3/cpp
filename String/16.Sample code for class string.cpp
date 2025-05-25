#include <iostream>
using namespace std;
int main()
{
    string str_1 = "HELLO WORLD";
    cin >> str_1;
    cout << str_1 << endl;

    string str_2 = "HELLO WORLD";
    getline(cin, str_2);
    cout << str_2 << endl;

    return 0;
}
/*
output:

HELLO
HELLO WORLD

*/