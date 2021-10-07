#include <iostream>
using namespace std;
int main() { //[char, bool, short, int, long, float, double, long double, wide char]
    char c = 'R';
    bool b = true;
    short s = 1;
    int i = 4;
    long l = 30021;
    float f = 5.2;
    double d = 76.12;
    long double ld = 23415.8976;
    wchar_t w = L'z';
    cout << "char: " << c << endl;
    cout << "bool: " << b << endl;
    cout << "short: " << s << endl;
    cout << "int: " << i << endl;
    cout << "long: " << l << endl;
    cout << "float: " << f << endl;
    cout << "double: " << d << endl;
    cout << "long double: " << ld << endl;
    cout << "wide char: " << w << endl;
    return 0;
}
