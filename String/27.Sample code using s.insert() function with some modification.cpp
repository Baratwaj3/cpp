#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "HOW YOU!";
    str.insert(4, "ARE ", 2);
    cout << "The inserted string with some count is : " << str << endl;
    return 0;
}
/*

output:

The inserted string with some count is : HOW ARYOU!

*/