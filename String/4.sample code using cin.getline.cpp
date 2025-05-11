#include <iostream>
using namespace std;
int main()
{
    char s[50];
    char s2[50];
    cout << "Enter your name " << endl;
    cin.getline(s, 50);
    cout << "Welcome " << s << endl;

    cout << "Enter your name again " << endl;
    cin.getline(s2, 50);
    cout << "Welcome " << s2 << endl;
    return 0;
}
/*
output:

Enter your name
Baratwaj
Welcome Baratwaj
Enter your name again
Chandru
Welcome Chandru

*/