#include <iostream>
#include <string>
using namespace std;

int main()
{
    string blog = "Welcome to the blog!";
    blog.resize(10);
    cout << "Preview: " << blog << "..." << endl;
    return 0;
}
/*
output:

Preview: Welcome to...

*/
