#include <iostream>

using namespace std;

class Parent
{

public:
    Parent()
    {
        cout << " Parent class constructor\n";
    }
};

class Child : public Parent
{

public:
    Child()
    {
        cout << " Child class constructor\n";
    }
};

int main()
{
    Child obj;

    return 0;
}

/* In this program first child class is called then the parent class but
  the execution flow is from  parent to child */