#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter sentence: ";
    getline(cin, sentence);
    cout << "You typed: " << sentence << endl;
    return 0;
}
