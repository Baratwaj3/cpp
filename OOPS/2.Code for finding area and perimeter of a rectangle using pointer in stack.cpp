#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breath;

    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }
};

int main()
{
    rectangle r;
    rectangle *p;
    p = &r;

    p->length = 10;
    p->breath = 20;

    cout << "Area of the rectangle: " << p->area() << endl;
    cout << "Perimater of the rectangle: " << p->perimeter() << endl;

    return 0;
}
/*
output:
*/