#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "John Doe";
    name.insert(5, "Michael ");
    cout << "Full name: " << name << endl;
    return 0;
}
/*
output:
Full name: John Michael Doe
*/
