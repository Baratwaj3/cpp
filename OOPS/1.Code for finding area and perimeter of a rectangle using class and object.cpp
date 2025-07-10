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
    rectangle r_1;

    r_1.length = 10;  //. to access members in the class [dot operator only for variables not for pointers]
    r_1.breath = 20;

    cout <<"Area of the rectangle: "<< r_1.area() << endl;
    cout <<"Perimater of the rectangle: "<< r_1.perimeter() << endl;

    return 0;
}
/*
output_1:

Area of the rectangle: 200
Perimater of the rectangle: 60

*/