#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "openai";
    string rev = "";
    for (int i = s.size() - 1; i >= 0; --i)
        rev += s[i];
    cout << "Reversed: " << rev << endl;
    return 0;
}
/*

output:abortReversed: ianepo

 */
