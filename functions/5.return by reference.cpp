#include <iostream>
using namespace std;
int& fun (int& add)
{
     add= 10+add;
    return add;
}
int main ()
{
    int x= 5;
    cout<<"before change: "<<x<<endl;
    int input= fun(x);
    cout<< "after change:"<<input;
    return 0;
}

/*
output:
    before change: 5
    after change:15
*/





