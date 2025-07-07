#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string:" << endl;
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        cout << str[i];
    }

    return 0;
}
/*
output_1:

Enter the string:
welcome to my github profile
WELCOME TO MY GITHUB PROFILE

output_2:

Enter the string:
THANKYOU FOR VISITING MY PROFILE
thankyou for visiting my profile

output_3:

Enter the string:
SeE yOu SoOn
sEe YoU sOoN

*/
