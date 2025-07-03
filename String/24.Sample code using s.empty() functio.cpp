#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    
    if(str.empty())
    {
        cout<<"The string is empty"<<endl;
    }
    else
    {
        cout<<"The given string is :"<<str<<endl;
    }
    return 0;
}
