#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Max size: " << s.max_size() << endl;

    string s1 = "abc";
    cout << "Max size of small string: " << s1.max_size() << endl;

    string s2 = "some large text here";
    cout << "Max size: " << s2.max_size() << endl;
}