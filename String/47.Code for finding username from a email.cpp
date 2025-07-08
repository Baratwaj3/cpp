#include <iostream>
using namespace std;

int main()
{
    string email;
    cout << "Enter your E-mail: ";
    cin >> email;
    int i = email.find('@');
    string j = email.substr(0, i);
    int len = j.length();
    bool valid = true;

    for (int k = 0; k < len; k++)
    {
        char ch = j[k];
        if (!((ch >= 'a' && ch <= 'z') ||
              (ch >= 'A' && ch <= 'Z') ||
              (ch >= '0' && ch <= '9') ||
              (ch == '_')))
        {
            valid = false;
            break;
        }
    }

    if (valid == true)
        cout << "Valid username: " << j << endl;
    else
        cout << "Invalid username: " << j << endl;

    return 0;
}
/*
output_1:
Enter your E-mail: baratwaj3@gmail.com
Valid username: baratwaj3

output_2:
Enter your E-mail: b#arat-waj3@gmail.com
Invalid username

*/
