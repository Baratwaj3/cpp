#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char A[] = "324.3";
    float sample_test = strtof(A, NULL);
    cout << "Integer value : " << sample_test << endl;
    sample_test += 1;
    cout << "Integer after added: " << sample_test << endl;
    return 0;
}
/*output:
Integer value : 324.3
Integer after added: 325.3
*/
