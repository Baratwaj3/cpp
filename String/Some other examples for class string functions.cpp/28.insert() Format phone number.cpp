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
