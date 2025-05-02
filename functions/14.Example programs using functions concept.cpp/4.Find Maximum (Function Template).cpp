#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 3 and 7: " << maximum(3, 7) << endl;
    cout << "Max of 4.5 and 2.1: " << maximum(4.5, 2.1) << endl;
    return 0;
}

/*
Output:
Max of 3 and 7: 7
Max of 4.5 and 2.1: 4.5
*/
