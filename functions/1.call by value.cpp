#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;
}
int main()
{
    int a = 5, b = 6;
    swap(a, b);
    cout << a << "\n"<< b << endl;
    return 0;
}

/* output:

    5
    6
    Here the does not swaped because it deals with the copy that actual value
 */
