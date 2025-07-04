#include <iostream>
#include<string>
using namespace std;
int main() {
  string str_1=" VIEWER!";
  string str_2="HOW ARE YOU";
  str_1.swap(str_2);
  cout<<str_1<<str_2<<endl;
  return 0;
}
