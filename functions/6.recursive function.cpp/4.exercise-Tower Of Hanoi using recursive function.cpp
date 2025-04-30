#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }

    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;

    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n = 3;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}

// output :
//   Move disk 1 from rod A to rod C
//   Move disk 2 from rod A to rod B
//   Move disk 1 from rod C to rod B
//   Move disk 3 from rod A to rod C
//   Move disk 1 from rod B to rod A
//   Move disk 2 from rod B to rod C
//   Move disk 1 from rod A to rod C
