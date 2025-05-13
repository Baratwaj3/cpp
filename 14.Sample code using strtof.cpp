#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char A[] = "324.3";
    float sample_test = strtof(A, NULL);
    cout << "Float value : " << sample_test << endl;
    sample_test += 1;
    cout << "Float after added: " << sample_test << endl;
    return 0;
}
/*output:

Float value : 324.3
Float after added: 325.3
*/
