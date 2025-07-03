#include <iostream>
using namespace std;
int main()
{
    string str = "HELLO";
    int C_1 = str.capacity();
    cout << "The capacity of the string before resized is : " << C_1 << endl;

    str.resize(30);

    int C_2 = str.capacity();
    cout << "The resized capacity of the string is : " << C_2 << endl;
    return 0;
}
/*

output:

The capacity of the string before resized is : 15
The resized capacity of the string is : 30

*/