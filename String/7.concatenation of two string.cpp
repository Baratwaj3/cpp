#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[] = "hello";
    char s2[] = "welcome";
    strcat(s, s2);
    cout << "Full concatenation: " << s << endl;

    char s3[] = "hello";
    strncat(s3, s2, 3);
    cout << "Partial concatenation (3 chars): " << s3 << endl;
    return 0;
}
/*
output: 

Full concatenation: hellowelcome
Partial concatenation (3 chars): hellowel

*/
