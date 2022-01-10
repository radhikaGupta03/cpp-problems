#include <iostream>
using namespace std;

class A
{
public:
    virtual int add(int x, int y)
    {

        return (x + y);
    }
};

class B : public A
{
public:
    int add(int x, int y)
    {

        return (x + y + 5);
    }
};

int main()
{

    A *p;
    B e2;

    p = &e2;

    //cout<<p->add(2, 4)<<endl;
    /* this gives an output 6 due to early binding or complie time binding */

    cout << p->add(2, 4) << endl;
    /* this gives an output 11 due to late binding or dynamic  binding by using virtual keyword */
    cout << endl;

    return 0;
}