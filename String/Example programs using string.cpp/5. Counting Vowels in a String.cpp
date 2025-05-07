#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "electricity";
    int count = 0;

    for(char ch : str) {
        ch = tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    cout << "Number of vowels: " << count << endl;
    return 0;
}

/*
Number of vowels: 4

*/