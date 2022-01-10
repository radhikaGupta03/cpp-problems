#include <iostream>

using namespace std;

class A
{

public:
    A(int x)
    {
        cout << "A class constructor\n";
        cout << endl;
    }
};

class B : public A
{

public:
    B(int x, int y) : A(x)
    {
        cout << "B class constructor\n";
        cout << endl;
    }
};

int main()
{
    B obj(4, 5);

    return 0;
}

//Passing parameters to base class through derived class constructor.