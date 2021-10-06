#include <iostream>
#include <algorithm>
using  namespace std;
int main() {
    string str;
    getline (cin, str);
    int n = str.size();
    string org = str;
    int flag = 0;
    reverse(str.begin(), str.end());
    for (int i = 0; i < n / 2; i++) {
        if (str[i] == org[i]) 
            flag = 0;
        else 
            flag = 1;
    }
    if (flag == 0)
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;
    return 0;
}
