#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int a = 9, b = 4;
    float c = 6.4, d = 4.9;
    string e = "Radhika", f = "Gupta";
    int r1 = a + b;   // int + int
    float r2 = c + d;    // float + float
    string r3 = e + f;    // string + string
    float r4 = a + c;   // int + float
    string r5 = b + e;   // int + string
    cout << "int + int = " << r1 << endl;
    cout << "float + float = " << r2 << endl;
    cout << "string + string = " << r3 << endl;
    cout << "int + float = " << r4 << endl;
    cout << "int + string = " << r5 << endl;
    return 0;
}
