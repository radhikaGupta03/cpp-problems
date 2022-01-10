#include <iostream>
using namespace std;

class A
{

public:
    void display1()
    {
        cout << "This the display1 function of the Base class A\n";
    }
};

class B : public A
{

public:
    void display2()
    {
        cout << "This the display2 function of the child class B\n";
    }
};

int main()
{
    B obj;
    cout << endl;
    obj.display1();
    return 0;
}