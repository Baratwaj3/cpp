#include <iostream>
using namespace std;

void callTracker() {
    static int count = 0;
    count++;
    cout << "This function has been called " << count << " times." << endl;
}

int main() {
    callTracker();
    callTracker();
    callTracker();
    return 0;
}

/*
Output:

    This function has been called 1 times.
    This function has been called 2 times.
    This function has been called 3 times.
    
*/
