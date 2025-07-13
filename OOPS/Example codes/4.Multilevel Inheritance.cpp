#include <iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal Sound\n";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog Barking\n";
    }
};

class Puppy : public Dog
{
public:
    void weep()
    {
        cout << "Puppy Weeping\n";
    }
};

int main()
{
    Puppy p;
    p.sound();
    p.bark();
    p.weep();
    return 0;
}
/*
Output:

Animal Sound
Dog Barking
Puppy Weeping

*/