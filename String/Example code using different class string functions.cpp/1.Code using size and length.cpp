#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Hello";
    cout << "Length: " << s1.length() << endl;

    string s2 = "Git Hub";
    cout << "Size: " << s2.size() << endl;

    string s3 = " ";
    cout << "Length of empty string: " << s3.length() << endl;
}
/*
output:

Length: 5
Size: 7
Length of empty string: 1
*/