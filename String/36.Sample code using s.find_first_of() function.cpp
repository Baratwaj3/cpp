#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str_1 = "welcome";

    cout << "First char finded at the index: " << str_1.find_first_of('c') << endl;

    return 0;
}
/*

output:

First char finded at the index: 3

*/