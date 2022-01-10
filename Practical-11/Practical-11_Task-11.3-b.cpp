// diamond in multiple inheritance

#include <iostream>
using namespace std;

class A
{

public:
    void display()
    {
        cout << endl;
        cout << "This the display function of the base class A\n";
    }
};

class B : virtual public A
{

public:
    void display1()
    {
        cout << "This the display1 function of the child class B\n";
    }
};

class C : virtual public A
{

public:
    void display2()
    {
        cout << "This the display2 function of the child class C\n";
    }
};

class D : public B, public C
{

public:
    void display3()
    {

        cout << "This the display1 function of the child class D\n";
    }
};

int main()
{
    D obj; // object of child class

    obj.display();
    cout << endl;

    obj.display1();
    cout << endl;

    obj.display2();
    cout << endl;

    return 0;
}