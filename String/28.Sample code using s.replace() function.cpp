#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "HOW YOU!";
    str.replace(4, 4, "ARE");
    cout << "Replace string is : " << str << endl;
    return 0;
}
/*

output:

Replace string is : HOW ARE

*/