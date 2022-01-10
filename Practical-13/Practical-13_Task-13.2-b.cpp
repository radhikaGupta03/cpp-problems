#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    virtual void show() = 0; // pure virtual function
    int add(int x)
    {
        return (x + 2);
    }
};

// This class inherits from Base and implements fun()
class Derived : public Base
{
public:
    int y;
    void show()
    {
        cout << "show() called";
        cout << endl;
    }

    virtual int add(int y)
    {
        return (y + 3);
    }
};

int main(void)
{
    Base *p;

    Derived o;
    p = &o;

    //cout<<p->add(56)<<endl;
    // cout<<endl;

    p->show();

    return 0;
}
/*  abstraction was in Base class as pure virtual function is in base class*/