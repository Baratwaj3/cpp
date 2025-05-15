#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
    int temp = b;
    b= a;
    a= temp;
   
}
int main ()
{
    
   int a,b;
   a=5;
   b=6;
   swap(a,b);
   cout<< a <<"\n"<< b <<endl;
   return 0;
}
/*output :

   6
   5

   Here &a and &b are referedd to actual value a and b if ther is any changes in &a and &b it is also changed in a and b because it is sharing address with a and b
*/


