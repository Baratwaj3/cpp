#include <iostream>
using namespace std;

void scope(int n)

  {
      if(n>0)
      {
          scope (n-1);// recursive function
          cout<<n<<endl; 
          
      }
  }
  int main ()
  {
      int x=5;
      scope (x);
      return 0;
  }

//output :
//    1
//    2
//    3
//    4
//    5

