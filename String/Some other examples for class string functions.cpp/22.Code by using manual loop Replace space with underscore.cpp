#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "file name with space.txt";
    for (char &c : s)
    {
        if (c == ' ')
            c = '_';
    }
    cout << "Modified: " << s << endl;
    return 0;
}
/*
output:
Modified: file_name_with_space.txt
*/
