#include <iostream>
#include <string>
using namespace std;

int main()
{
    string article = "This is a sample blog article.";
    cout << "Preview: " << article.substr(0, 10) << "..." << endl;
    return 0;
}
/*
output:

Preview: This is a ...

*/