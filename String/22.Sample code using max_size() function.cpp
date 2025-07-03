#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    size_t M = str.max_size();
    cout << "The maximum size of the string is: " << M << endl;
    return 0;
}
/*
output:
The maximum size of the string is: 4611686018427387903
*/