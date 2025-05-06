#include <iostream>
using namespace std;
int main()
{
    char s[] = "welcome";
    char r[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char t[] = {65, 66, 67, 68, 0};
    const char *p = "world";
    cout << s << endl;
    cout << r << endl;
    cout << t << endl;
    cout << p << endl;

    return 0;
}
/*
output:
    welcome
    hello
    ABCD
    world
/*
