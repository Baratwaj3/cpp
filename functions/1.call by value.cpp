#include <iostream>
using namespace std;
int sample(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int x = sample(5, 6);
    cout << x << endl;
}

// output:
//    11
