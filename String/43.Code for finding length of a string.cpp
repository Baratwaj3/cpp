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
/*
output:
Enter the string
Hi Viewer
character1=H
character2=i
character3= 
character4=V
character5=i
character6=e
character7=w
character8=e
character9=r
Total characters: 9
*/