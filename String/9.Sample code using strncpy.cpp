#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char A[50] ="";
    char B[50];
    cout << "Enter your string" << endl;
    cin.getline(B, 50);

    int x;
    cout << "Enter the how many char want to be copied: " << endl;
    cin >> x;
    strncpy(A, B, x);
    A[x]='\0';
    cout << "result: " << A << endl;
    return 0;
}

/*
output:

Enter your string
WELCOME TO MY GITHUB PROFILE
Enter the how many char want to be copied:
7
result: WELCOME

*/
