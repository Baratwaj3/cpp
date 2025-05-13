#include <iostream>
using namespace std;
#include <cstring>
int main() {
    char A[]= "x=10;y=20;z=35";
    char *Token= strtok(A,"=;");
    while(Token !=NULL)
    {
    cout<<"Result: "<<Token<<endl;
    Token=strtok(NULL,"=;");
    }
     return 0;

    }
/*output:
Result: x
Result: 10
Result: y
Result: 20
Result: z
Result: 35
*/
