#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email = "user@yahoo.com";
    size_t pos = email.find("yahoo.com");
    if (pos != string::npos)
        email.replace(pos, 9, "gmail.com");
    cout << "Updated email: " << email << endl;
    return 0;
}
/*
output:

Updated email: user@gmail.com 

*/