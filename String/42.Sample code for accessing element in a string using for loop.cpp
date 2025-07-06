#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "TODAY";
    for (int i = 0; str[i] != '\0'; i++)
    {

        cout << str[i];
    }
    return 0;
}
/*
output:
TODAY
*/