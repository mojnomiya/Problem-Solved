#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a, b;
        a = s.at(0) - 48;
        b = s.at(2) - 48;
        cout << a + b << "\n";
    }
    return 0;
}