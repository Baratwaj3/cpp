#include <iostream>
using namespace std;

void function(int n)
{

    if (n > 0)
    {
        function(n - 1); // recursive function
        cout << n << endl;
    }
}
int main()
{
    int x = 5;
    function(x);
    return 0;
}

// output :
//     1
//     2
//     3
//     4
//     5
