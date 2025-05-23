#include <iostream>
#include <string>
using namespace std;

int main()
{
    string filename = "document";
    filename.append(".pdf");
    cout << "Full filename: " << filename << endl;
    return 0;
}
/*
output:

Full filename: document.pdf

*/