//Task 06
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "Hello";
    cout << "Before: " << &str << endl;
    str[0] = 'J';
    cout << "After: " << &str << endl;
    cout << str << endl;
    return 0;
}
