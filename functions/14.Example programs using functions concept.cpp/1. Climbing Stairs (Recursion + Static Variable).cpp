#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n <= 2)
        return n;
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    int steps = 5;
    cout << "Ways to climb " << steps << " steps: " << climbStairs(steps) << endl;
    return 0;
}


/*
Output:
   Ways to climb 5 steps: 8
*/
