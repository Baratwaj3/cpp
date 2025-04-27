#include <iostream>
using namespace std;

int& returnByReference(int &num) {
    num = 20;  
    return num; 
}

int main() {
    int value = 10;

    cout << "Before function call: " << value << endl;

    returnByReference(value);

    cout << "After function call: " << value << endl;

    return 0;
}
