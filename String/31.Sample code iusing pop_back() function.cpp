#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "HOW ARE YOUx";
    str.pop_back();
    cout << "String after pop_back: " << str << endl;
    return 0;
}
/*

output:

String after pop_back: HOW ARE YOU

*/
