#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string" << endl;
    getline(cin, str);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
        cout << "character" << i + 1 << "=" << str[i] << endl;
    }
    cout << "Total characters: " << count << endl;

    return 0;
}