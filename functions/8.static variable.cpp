#include <iostream>
using namespace std;

void scope()

    {
        static int a=5; // this is just like global variable but it is only accessable inside the decleared function but the memory allocating is in code section
        a++;
        cout<<a<<" "<<endl;
    }
int main() {
    
   scope();
   scope();
   scope();
   
    return 0;
}

/*output :
   6 
   7 
   8
*/ 
