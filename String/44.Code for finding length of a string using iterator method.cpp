#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string" << endl;
    getline(cin, str);
    string ::iterator it;

    int count = 0;
    for (it = str.begin(); it != str.end(); it++)
    {
        count++;
        cout << "character" << count << "=" << *it << endl;
    }
    cout << "Total characters: " << count << endl;

    return 0;
}