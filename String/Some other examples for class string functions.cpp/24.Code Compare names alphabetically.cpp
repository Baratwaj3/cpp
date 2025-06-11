#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1 = "Alice", name2 = "Bob";
    if (name1 < name2)
        cout << name1 << " comes before " << name2 << endl;
    else
        cout << name2 << " comes before " << name1 << endl;
    return 0;
}
