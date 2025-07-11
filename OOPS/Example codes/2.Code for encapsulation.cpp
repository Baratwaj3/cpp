#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    Student s;
    s.setAge(20);
    cout << "Age: " << s.getAge();
    return 0;
}
/*
Output:

Age: 20

*/
