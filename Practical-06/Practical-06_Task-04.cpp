#include <iostream>
#include <algorithm>
using namespace std;
int main()
 {
    string s, rev, temp = "";
    cout << "Enter a string" << endl;
    getline(cin, s);
    
    string :: iterator it;
    for(it = s.begin(); it != s.end(); it++) {
    rev = *it + rev;
    }
    
    cout << "Reverse of string(manually): " << rev << endl;
    
    reverse(s.begin(), s.end());
    cout << "Reverse of string(using built in): " << s << endl;
    return 0;
}
