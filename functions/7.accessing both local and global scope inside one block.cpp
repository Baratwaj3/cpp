#include <iostream>
using namespace std;

int g = 10;  // Global variable g

void scope()

    {
        int g = 20; 
        g++; // local g 
       cout<<"incrementing local variable : "<<g<<endl;
       
       ::g++; // using scope resulation for accessing global var
       cout<<"incrementing global variable : "<<::g<<endl;
    }
int main() {
    
    scope();
    return 0;
}
/*output:
    incrementing local variable : 21
    incrementing global variable : 11
*/