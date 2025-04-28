#include <iostream>
using namespace std;

int g = 10;  // Global variable

void scope() {
    g++; //
    int a = 5;
    int l = g + a;  //  uses global 'g'
    cout<<"Adding global variable with a :"<<l<<endl;
    
    cout << "accessing the global variable anywhere in the code: "<< g << endl;

    {
        int g = 20;  // New local 'g' inside this block
        g++;
        cout << "Local to the block: ";
        cout << g << endl;
    }
}

int main() {
    cout<<"Getting  global variable before changes:"<< g<<endl; // getting global variable 
    scope();
    cout<<"Getting  global variable after changes:"<< g<<endl;// getting after the function call
    return 0;
}

// output :
//    Getting  global variable before changes:10
//    Adding global variable with a :16
//    accessing the global variable anywhere in the code: 11
//    Local to the block: 21
//    Getting  global variable after changes:11


