#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Welcome";
    cout << "Capacity: " << s1.capacity() << endl;

    string s2 = "Artificial Intelligence";
    cout << "Capacity: " << s2.capacity() << endl;

    string s3 = "";
    s3.reserve(50);
    cout << "Reserved Capacity: " << s3.capacity() << endl;
}
/*
output:
Capacity: 15
Capacity: 23
Reserved Capacity: 50
*/

