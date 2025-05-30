#include <iostream>
using namespace std;

int totalStudents = 0;

void markAttendance() {
    static int present = 0;
    present++;
    totalStudents++;
    cout << "Present: " << present << ", Total Students: " << totalStudents << endl;
}

int main() {
    markAttendance();
    markAttendance();
    markAttendance();
    return 0;
}


/*
Output:
   Present: 1, Total Students: 1
   Present: 2, Total Students: 2
   Present: 3, Total Students: 
   
*/

