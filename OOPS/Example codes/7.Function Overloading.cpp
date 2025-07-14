#include <iostream>
using namespace std;

class Print
{
public:
    void show(int i)
    {
        cout << "Integer: " << i << endl;
    }
    void show(double d)
    {
        cout << "Double: " << d << endl;
    }
};

int main()
{
    Print p;
    p.show(5);
    p.show(5.5);
    return 0;
}
/*
Output:
Integer: 5
Double: 5.5
*/
