#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "bob";
    name[0] = toupper(name[0]);
    cout << "Capitalized: " << name << endl;
    return 0;
}
/*
output:

 Capitalized: Bob
*/