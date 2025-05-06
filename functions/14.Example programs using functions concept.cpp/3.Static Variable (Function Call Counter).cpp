#include <iostream>
using namespace std;

void counter() {
    static int count = 0;
    count++;
    cout << "Function called " << count << " times." << endl;
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}

/*
Output:
    Function called 1 times.
    Function called 2 times.
    Function called 3 times.
*/
