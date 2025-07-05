#include <iostream>
#include <string>
using namespace std;
int main() {
    
       string str_1="welcome";
       char str_2[20];
       int str_3=str_1.copy(str_2,str_1.length());
       cout<<"no of char copies: "<<str_3;

    return 0;
}