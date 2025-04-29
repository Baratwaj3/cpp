#include <iostream>
using namespace std;

void scope(int n)

  {
      if(n>0)
      {
          cout<<n<<endl;
          scope (n-1); // recursive function 
      }
  }
  int main ()
  {
      int x=5;
      scope (x);
      return 0;
  }

//output :
//  5
//  4
//  3
//  2
//  1

