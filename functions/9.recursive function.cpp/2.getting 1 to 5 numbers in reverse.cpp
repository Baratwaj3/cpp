#include <iostream>
using namespace std;

void function(int n)

  {
      if(n>0)
      {
          cout<<n<<endl;
          function (n-1); // recursive function 
      }
  }
  int main ()
  {
      int x=5;
      function (x);
      return 0;
  }

//output :
//  5
//  4
//  3
//  2
//  1

