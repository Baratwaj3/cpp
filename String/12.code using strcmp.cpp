#include <iostream>
#include <cstring>
using namespace std;
int main() {
  char s1[50] ;
  cout<<"Enter a string: ";
  cin>>s1;
  char s2[50];
  cout<<"Enter target string: ";
  cin>>s2;
  int x;
  //If s1 is greater return (+), if s2 is greater return (-), if both ar same return (0)
  x=strcmp(s1,s2); 
  // returns difference in two string first char ASCII values
  cout<<"result : "<<x<<endl; 
    return 0;
}

/*
output_1:
Enter a string: BARAT
Enter target string: barat
result : -32

output_2:
Enter a string: barat
Enter target string: BARAT
result : 32

output_3:
Enter a string: barat
Enter target string: barat
result : 0


*/