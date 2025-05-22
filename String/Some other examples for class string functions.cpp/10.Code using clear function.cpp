#include <iostream>
#include <string>
using namespace std;

int main() {
    string search = "something";
    search.clear();
    cout << "Cleared search: '" << search << "'" << endl;
    return 0;
}
/*
output:
Cleared search: ''
*/