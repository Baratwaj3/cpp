#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line = "This is a bad idea";
    size_t pos = line.find("bad ");
    if (pos != string::npos)
        line.erase(pos, 4);
    cout << "Cleaned line: " << line << endl;
    return 0;
}
/* 
output:

Cleaned line: This is a idea

*/
