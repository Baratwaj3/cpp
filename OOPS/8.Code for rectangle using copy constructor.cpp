#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        setlength(l);
        setbreadth(b);
    }

    // Copy constructor
    Rectangle(const Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    void setlength(int l)
    {
        if (l >= 0)
            length = l;
        else
            cout << "Not a valid length" << endl;
    }

    void setbreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            cout << "Not a valid breadth" << endl;
    }

    int getlength() { return length; }
    int getbreadth() { return breadth; }

    int area() { return length * breadth; }
    int perimeter() { return 2 * (length + breadth); }
};

int main()
{
    Rectangle r1(9, 3); // Original object
    Rectangle r2 = r1;  // Copy constructor

    cout << "Copied from r1:" << endl;
    cout << "Length: " << r2.getlength() << endl;
    cout << "Breadth: " << r2.getbreadth() << endl;
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;

    return 0;
}
/*
output:

Copied from r1:
Length: 9
Breadth: 3
Area: 27
Perimeter: 24
*/
