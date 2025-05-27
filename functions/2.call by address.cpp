#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main()
{

    int a, b;
    a = 5;
    b = 6;
    swap(&a, &b);
    cout << a << "\n"
         << b << endl;
    return 0;
}
/* output :

    6
    5

    Here the function does not return anything it just modifies the value by using pointers in the memory
*/