#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char A[] = "324";
    int sample_test = strtol(A, NULL, 10); // Here the 10 is decimal in number system
    cout << "Integer value : " << sample_test << endl;
    sample_test += 1;
    cout << "Integer after added: " << sample_test << endl;
    return 0;
}

/*
output:

Integer value : 324
Integer after added: 325

*/