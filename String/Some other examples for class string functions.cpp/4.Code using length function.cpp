#include <iostream>
#include <string>
using namespace std;

int main() {
    string sms = "This is a short SMS.";
    cout << "SMS Length: " << sms.length() << endl;
    if (sms.length() > 160)
        cout << "SMS is too long!" << endl;
    else
        cout << "SMS is within limit." << endl;
    return 0;
}
