#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}
int add(int x, int y, int z)
{
    return x + y + z;
}
float add(float x, float y)
{
    return x + y;
}
float add(float x, float y, float z)
{
    return x + y + z;
}
int main()
{
    int a = add(2, 3);
    int b = add(2, 3, 4);
    float c = add(3.14f, 1.73f);
    float d = add(3.14f, 1.73f, 6.132f);
    cout << a << "\n"<< b << "\n"<< c << "\n"<< d << endl;
    return 0;
}

/* output:

    5
    9
    4.87
    11.002
    
*/