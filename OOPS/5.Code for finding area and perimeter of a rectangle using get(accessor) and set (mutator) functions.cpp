#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Setter for length
    void setlength(int l)
    {
        if (l >= 0)               // for control over data
            length = l;
        else
            cout << "Not a valid length" << endl;
    }

    // Setter for breadth
    void setbreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            cout << "Not a valid breadth" << endl;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }

    // Area function
    int area()
    {
        return length * breadth;
    }

    // Perimeter function
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r;
    r.setlength(10);
    r.setbreadth(20);

    cout << "Length: " << r.getlength() << endl;
    cout << "Breadth: " << r.getbreadth() << endl;

    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}
/*
output_1:

Length: 10
Breadth: 20
Area: 200
Perimeter: 60

output_2:

Not a valid length
Length: 1651076199
Breadth: 20
Area: -1338214388
Perimeter: -992814858
*/
