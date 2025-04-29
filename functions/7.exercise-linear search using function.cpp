#include <iostream>
using namespace std;
int search(int A[], int num, int k)
{
    for (int i = 0; i < num; i++)
    {

        if (k == A[i])
            return i;
    }
    return -1;
}
int main()
{
    int num;

    cout << "Enter the number of elements" << endl;
    cin >> num;

    int A[num];

    cout << "Enter " << num << " to search" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> A[i];
    }

    int k;
    cout << "Enter the number to be searched :" << endl;
    cin >> k;

    int index = search(A, num, k);

    if (index > -1)
        cout << "The number is found at the index :" << index << endl;
    else
        cout << "The number is not found" << endl;

    return 0;
}

//   output 1:
//     Enter the number of elements
//     3
//     Enter 3 to search
//     1
//     2
//     3
//     Enter the number to be searched :
//     3
//     The number is found at the index :2

//   output 2:
//     Enter the number of elements
//     3
//     Enter 3 to search
//     3
//     2
//     1
//     Enter the number to be searched :
//     9
//     The number is not found
