#include <iostream>
using namespace std;

class A
{

    int a1 = 2;

protected:
    int a2 = 20;

public:
    int a3 = 200;

    void y1()
    {
        cout << a1 << endl;
    }
};

class B : public A
{

protected:
    int a2 = 20;

public:
    int a3 = 200;

    void x1()
    {
        A::y1(); // accesing from base class
        cout << a2 << endl;
        cout << a3 << endl;
    }
};

int main()
{
    B o;
    o.x1();

    return 0;
}