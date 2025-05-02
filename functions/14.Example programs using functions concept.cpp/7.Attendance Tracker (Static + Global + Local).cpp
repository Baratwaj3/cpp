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

