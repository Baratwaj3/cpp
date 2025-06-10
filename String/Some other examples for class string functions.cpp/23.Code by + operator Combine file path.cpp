#include <iostream>
#include <string>
using namespace std;

int main() {
    string path = "C:/Users/";
    string user = "Admin";
    string fullPath = path + user + "/Documents";
    cout << "Full Path: " << fullPath << endl;
    return 0;
}
