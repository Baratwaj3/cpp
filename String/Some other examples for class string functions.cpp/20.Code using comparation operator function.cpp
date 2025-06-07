#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pass1 = "secret123";
    string pass2 = "secret123";
    if (pass1 == pass2)
        cout << "Passwords match." << endl;
    else
        cout << "Passwords do not match." << endl;
    return 0;
}
/*output: 
Passwords match.
*/
