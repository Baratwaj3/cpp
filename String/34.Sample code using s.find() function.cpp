#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str_1 = "welcome";

    cout << "String finded at the index: " << str_1.find("wel") << endl;

    cout << "Character finded at the index: " << str_1.find('l') << endl;

    return 0;
}
/*

output:

String finded at the index: 0
character finded at the index: 2

*/