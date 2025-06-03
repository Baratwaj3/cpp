#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "barat";
    name.insert(5, "waj ");
    cout << "Full name: " << name << endl;
    return 0;
}
/*
output:

Full name: barat waj

*/
