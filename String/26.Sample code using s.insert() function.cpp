#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "HOW YOU!";
    str.insert(4, "ARE ");
    cout << "The inserted string is : " << str << endl;
    return 0;
}
/*

output:

The inserted string is : HOW ARE YOU!

*/