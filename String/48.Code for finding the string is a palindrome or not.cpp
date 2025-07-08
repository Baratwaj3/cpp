#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    string rev;
    cout << "Enter the string: ";
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower); //to covert the str to lowercase 

    int len = (int)str.length();
    rev.resize(len);

    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = str[j];
    }

    rev[len] = '\0';

    if (str == rev)
        cout << "palindrome" << endl;
    else
        cout << "not a palindrome" << endl;

    return 0;
}
/*
output_1:

Enter the string: madam
palindrome

output_2:
Enter the string: MaDaM
palindrome

output_3:
Enter the string: welcome
not a palindrome
*/
