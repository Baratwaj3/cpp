#include <iostream>
using namespace std ;
int factorial (int n)
{
    if(n<=1)
    {
        return 1;
    }
    else 
    return n*factorial(n-1);
}
int main ()
{
    int num= 5;
    int n = factorial(num);
    cout<< n;
    return 0 ;
}

//output :
//     120
