#include <iostream>
using namespace std;

void returnByAddress(int *p) {
    *p = 10; 

int main() {
    int num = 5;

    cout << "Before function call: " << num << endl;

    returnByAddress(&num);

    cout << "After function call: " << num << endl;

    return 0;
}
