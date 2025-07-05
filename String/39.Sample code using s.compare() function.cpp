#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str_1 = "welcome"; // ASCII of w is 119
    string str_2 = "GitHub";  // ASCII of G is 71
    cout << "Compare of first two string is : " << str_1.compare(str_2) << endl;

    string str_3 = "welcome"; // ASCII of w is 119
    string str_4 = "xbox";    // ASCII of x is 120
    cout << "Compare of second two string is : " << str_3.compare(str_4) << endl;

    string str_5 = "welcome"; // ASCII of w is 119
    string str_6 = "welcome"; // ASCII of w is 119
    cout << "Compare of third two string is : " << str_5.compare(str_6) << endl;

    // We can also use strcmp(str_1,str_2) function as we studies before.

    return 0;
}
/*
output:

Compare of first two string is : 48
Compare of second two string is : -1
Compare of third two string is : 0

*/