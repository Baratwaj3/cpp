#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "banana";
    int count = 0;
    for (char c : s)
        if (c == 'a')
            count++;
    cout << "Number of 'a': " << count << endl;
    return 0;
}
/*
output:
 Number of 'a': 3
*/
