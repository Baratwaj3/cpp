#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Parameterized constructor
    Rectangle(int l, int b)
    {
        setlength(l);
        setbreadth(b);
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
    Rectangle r(12, 6); // parameterized constructor

    cout << "Length: " << r.getlength() << endl;
    cout << "Breadth: " << r.getbreadth() << endl;
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}
