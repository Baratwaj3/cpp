#include <iostream>
using namespace std;

void scope()

    {
        static int a=5;
        a++;
        cout<<a<<" "<<endl;
    }
int main() {
    
   scope();
   scope();
   scope();
   
    return 0;
}

//output :
//   6 
//   7 
//   8 
