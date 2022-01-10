// Destructors

#include <iostream>

using namespace std;

class Base
{

public:
    ~Base()
    {
        cout << "Base class destructor\n";
        cout << endl;
    }
};

class Derived : public Base
{

public:
    ~Derived()
    {
        cout << "Derived class destructor\n";
        cout << endl;
    }
};

int main()
{

    Base *ptr = new Derived; // Create a base class pointer object

    delete ptr; /* Here pointer object is called to delete the space occupied by the destructor.*/

    return 0;
}