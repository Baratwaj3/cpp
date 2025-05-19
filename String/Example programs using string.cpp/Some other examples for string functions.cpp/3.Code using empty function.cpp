#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password = "";
    if (password.empty())
    {
        cout << "Password field is empty!" << endl;
    }
    else
    {
        cout << "Password entered." << endl;
    }
    return 0;
}
