#include <iostream>
#include <stack>
using namespace std;

struct Move {
    int disk;
    char from;
    char to;
};

void moveDisk(char from, char to, stack<int>& src, stack<int>& dest) {
    int disk = src.top();
    src.pop();
    dest.push(disk);
    cout << "Move disk " << disk << " from " << from << " to " << to << endl;
}

void towerOfHanoiIterative(int n, char srcRod, char destRod, char auxRod) {
    stack<int> src, dest, aux;

    // Load all disks onto source rod, largest disk at bottom
    for (int i = n; i >= 1; i--)
        src.push(i);

    int totalMoves = (1 << n) - 1; // 2^n - 1

    // Swap destination and auxiliary for even number of disks
    if (n % 2 == 0)
        swap(destRod, auxRod);

    for (int i = 1; i <= totalMoves; i++) {
        if (i % 3 == 1) {
            if (src.empty() || (!dest.empty() && dest.top() < src.top()))
                moveDisk(destRod, srcRod, dest, src);
            else
                moveDisk(srcRod, destRod, src, dest);
        }
        else if (i % 3 == 2) {
            if (src.empty() || (!aux.empty() && aux.top() < src.top()))
                moveDisk(auxRod, srcRod, aux, src);
            else
                moveDisk(srcRod, auxRod, src, aux);
        }
        else if (i % 3 == 3) {
            if (aux.empty() || (!dest.empty() && dest.top() < aux.top()))
                moveDisk(destRod, auxRod, dest, aux);
            else
                moveDisk(auxRod, destRod, aux, dest);
        }
    }
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    towerOfHanoiIterative(n, 'A', 'C', 'B');
    return 0;
}
