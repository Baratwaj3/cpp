#include <iostream>
using namespace std;

class A {
public:
    void msgA() {
        cout << "Class A\n";
    }
};

class B {
public:
    void msgB() {
        cout << "Class B\n";
    }
};

class C : public A, public B {};

int main() {
    C obj;
    obj.msgA();
    obj.msgB();
    return 0;
}
