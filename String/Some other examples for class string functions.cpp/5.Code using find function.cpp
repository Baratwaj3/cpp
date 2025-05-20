#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email = "user@example.com";
    if (email.find("@gmail.com") != string::npos)
        cout << "Email is a Gmail address." << endl;
    else
        cout << "Email is not Gmail." << endl;
    return 0;
}
/*
output:
Email is not Gmail.

*/
