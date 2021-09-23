#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    long long int result = 1;
    
    while(b > 0) {

        if(b%2 != 0) {
            
            result = result * a;
        }
        b = b/2;
        a = a*a;
    }
    cout << result;
    return 0;
}