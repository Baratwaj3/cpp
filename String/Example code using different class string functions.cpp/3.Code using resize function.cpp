#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Hello";
    s1.resize(3);
    cout << "After resize to 3: " << s1 << endl;

    string s2 = "World";
    s2.resize(8, '*');
    cout << "After resize to 8 with '*': " << s2 << endl;

    string s3 = "Data";
    s3.resize(10);
    cout << "After resize to 10 (default char): " << s3 << endl;
}
/*
output:

After resize to 3: Hel
After resize to 8 with '*': World***
After resize to 10 (default char): Data
*/

