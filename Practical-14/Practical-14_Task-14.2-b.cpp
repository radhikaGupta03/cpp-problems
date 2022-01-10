#include <iostream>

using namespace std;

class Base
{

public:
    virtual ~Base()
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

/* If the base class destructor does not use a virtual keyword, only the base class 
 destructor will be called or deleted its occupied space because the pointer object is 
 pointing to the base class. So it does not call the derived class destructor to free the 
 memory used by the derived class, which leads to memory leak for the derived class.*/