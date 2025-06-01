#include <iostream>
#include <string>
using namespace std;

int main()
{
    string comment = "This is a bad comment.";
    if (comment.find("bad") != string::npos)
        cout << "Inappropriate content found." << endl;
    else
        cout << "Comment is clean." << endl;
    return 0;
}
/*
output:
Inappropriate content found.
*/
