#include <iostream>
using namespace std;
int add(int x, int y = 0, int z = 0)
{
    return x + y + z;
}
int main()
{
    int a = add(2);
    int b = add(2, 3);
    int c = add(2, 3, 4);
    cout << a << "\n"<< b << "\n"<< c << endl;
    return 0;
}

/* output:

     2
     5
     9
*/