#include <iostream>
using namespace std;

class Car
{
public:
    void display()
    {
        cout << "This is a car.\n";
    }
};

int main()
{
    Car c;
    c.display();
    return 0;
}
/*

Output:
This is a car.

*/