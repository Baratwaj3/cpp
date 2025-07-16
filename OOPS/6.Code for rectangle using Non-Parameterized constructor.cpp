#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Non-parameterized constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
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
    Rectangle r;  // non-parameterized constructor
    r.setlength(8);
    r.setbreadth(4);

    cout << "Length: " << r.getlength() << endl;
    cout << "Breadth: " << r.getbreadth() << endl;
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}
/**/
