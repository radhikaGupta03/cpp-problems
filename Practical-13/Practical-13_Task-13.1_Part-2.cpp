#include <iostream>
using namespace std;
class Base {
    public:
    int add(int a, int b) {
        return (a + b);
    }

    float add(float a, float b) {
        return (a + b + 1);
    }

    int add(int a, float b) {
        return (a + b + 2);
    }
};

class Child:public Base{
    public:
    using Base::add;

    int add(int a, int b) {
        return (a + b + 3);
    }
};

int main() {
    Base b;
    Child c;
    cout << "int(by base class): " << b.add(3, 5) << endl;
    cout << "float(by base class): " << b.add(4.2f, 6.3f) << endl;
    cout << "int and float(by base class): " << b.add(5, 2.2f) << endl;
    //cout << "Float(by child class): " << c.add(3.4, 4.2) << endl;
    cout << "Float and int(by child class): " << c.add(4, 6.5) << endl;

    return 0;
}
