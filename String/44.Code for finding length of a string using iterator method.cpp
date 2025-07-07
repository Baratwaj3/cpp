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
/*
output:
Enter the string
Welcome viewer
character1=W
character2=e
character3=l
character4=c
character5=o
character6=m
character7=e
character8= 
character9=v
character10=i
character11=e
character12=w
character13=e
character14=r
Total characters: 14
*/