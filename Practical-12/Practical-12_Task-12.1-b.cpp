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

class B : protected A
{

protected:
    int a2 = 20;

public:
    int a3 = 200;

    void x1()
    {

        cout << a2 << endl;
        cout << a3 << endl;
    }
};

int main()
{
    B o;

    A o2;

    o.x1();

    o2.y1();

    return 0;
}