#include <iostream>
#include <string>
using namespace std;

int main()
{
    string url = "https://example.com";
    if (url.find("https://") == 0)
        cout << "Secure URL" << endl;
    else
        cout << "Not a secure URL" << endl;
    return 0;
}
/*
output:
Secure URL
*/