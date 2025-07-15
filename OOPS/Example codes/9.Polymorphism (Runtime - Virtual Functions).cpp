#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base class\n";
    }
};

class Derived : public Base
{
public:
    void print() override
    {
        cout << "Derived class\n";
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->print();     // Calls Derived's print()
    return 0;
}
