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
    rectangle *p = new rectangle; // used to allocate memory in heap
    p->length = 10;
    p->breath = 20;
    cout << "Area of the rectangle: " << p->area() << endl;
    cout << "Perimater of the rectangle: " << p->perimeter() << endl;

    return 0;
}