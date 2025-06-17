#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email = "name@company.com";
    size_t at = email.find("@");
    string domain = email.substr(at + 1);
    cout << "Domain: " << domain << endl;
    return 0;
}
output:
/*
Domain: company.com
*/
