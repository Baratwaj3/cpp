#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length = 10;    // fixed value
    int breadth = 5;    // fixed value

public:
    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r;
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}
/*
output:
Area: 50
Perimeter: 30
*/
