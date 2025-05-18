#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "";
    cout << "Is string empty? " << (s.empty() ? "Yes" : "No") << endl;

    s = "Not empty now";
    cout << "After assigning, is empty? " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}
