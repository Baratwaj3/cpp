#include <iostream>
#include <string>
using namespace std;

int main()
{
    string post = "I love Java!";
    size_t pos = post.find("Java");
    if (pos != string::npos)
        post.replace(pos, 4, "C++");
    cout << "Updated post: " << post << endl;
    return 0;
}
/*
output:

Updated post: I love C++!

*/