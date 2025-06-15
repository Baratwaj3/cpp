#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num = "9876543210";
    num.insert(5, "-");
    cout << "Formatted: " << num << endl;
    return 0;
}
/*
output:

Formatted: 98765-43210

*/
