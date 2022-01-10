#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'a';
    }
    catch (int x)
    {
        cout << "caught" << x << "\n";
    }
    // Here this Catch will be executed
    catch (...)
    {
        cout << "Default Exception\n";
    }
    return 0;
}