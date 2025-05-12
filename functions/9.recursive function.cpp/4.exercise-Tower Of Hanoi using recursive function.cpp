#include <iostream>
using namespace std;

void TOH(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout<<"Move disk 1 from rod "<<A<<" to "<<C<<endl;
    }
    else
    {
        TOH(n - 1, A, C, B);
        cout<<"Move disk "<<n<<" from rod "<<A<<" to "<<C<<endl;
        TOH(n - 1, B, A, C);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of disk: "<<endl;
    cin>>n;
    char Source = 'A';
    char Auxiliary = 'B';
    char Destination = 'C';

    TOH(n, Source, Auxiliary,Destination );
    return 0;
}
/*
output:

     Enter the number of disk: 3
     Move disk 1 from rod A to C
     Move disk 2 from rod A to B
     Move disk 1 from rod C to B
     Move disk 3 from rod A to C
     Move disk 1 from rod B to A
     Move disk 2 from rod B to C 
     Move disk 1 from rod A to C
*/
