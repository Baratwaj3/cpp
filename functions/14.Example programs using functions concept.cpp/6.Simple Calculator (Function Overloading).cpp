#include <iostream>
using namespace std;

int calculate(int a, int b) {
    return a + b;
}

double calculate(double a, double b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << calculate(5, 10) << endl;
    cout << "Sum of doubles: " << calculate(5.5, 2.3) << endl;
    return 0;
}

