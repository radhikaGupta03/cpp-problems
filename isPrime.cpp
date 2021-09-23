#include <iostream>
#include <cmath>
using namespace std;
string isPrime(int n) {
    int flag = 0;
    if (n == 0 || n == 1) 
        return "Neither prime nor composite";
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0)
            flag++;
    }
    if (flag == 0)
        return "Prime number";
    else
        return "Composite number";
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << isPrime(n);
    return 0;
}
