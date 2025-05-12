#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[] = "";
    char s2[] = "welcome";
    strcpy(s1, s2);
    cout << "copying s2 in s1: " << s1 << endl;
    return 0;
}
/*
output: 

copying s2 in s1: welcome
*/