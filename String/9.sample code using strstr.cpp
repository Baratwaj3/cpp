#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[50];
    cout << "Enter a string: ";
    cin >> s1;
    char s2[50];
    cout << "Enter target string: ";
    cin >> s2;
    if (strstr(s1, s2) != NULL)
        cout << strstr(s1, s2) << endl;
    else
        cout << "not found";
    return 0;
}

/*
output_1:
Enter a string: programming
Enter target string: g
gramming

output_2:
Enter a string: programming
Enter target string: k
not found
*/