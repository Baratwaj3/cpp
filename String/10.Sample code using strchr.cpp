#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[50];
    cout << "Enter a string: ";
    cin >> s1;
    char s2;
    cout << "Enter target string: ";
    cin >> s2;
    char *x;          // search target from left to right
    x = strchr(s1, s2);
    if (x != NULL)
        cout << "First occuring of target word is : " << x << endl;
    else
        cout << "not found";
    return 0;
}

/*
output_1:
Enter a string: programming
Enter target string: r
First occuring of target word is : rogramming

output_2:
Enter a string: programming
Enter target string: l
not found

*/