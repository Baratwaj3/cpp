#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Clear this text";
    cout << "Before clear: " << s << endl;
    s.clear();
    cout << "After clear: '" << s << "'" << endl;
    return 0;
}
/*
output:

Before clear: Clear this text
After clear: ''
*/

