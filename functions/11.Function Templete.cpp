#include <iostream>
using namespace std;
template <class T>
T add(T x, T y)
{
    return x + y;
}
int main()
{
    int a = add(3, 2);
    float b = add(3.14f, 1.73f);
    cout << a << "\n"<< b << endl;
    return0;
}

//output:
//    5
//    4.87