#include <iostream>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a > b && a < c) || (a > c && a < b))
            cout << a << "\n";
        else if ((b > a && b < c) || b < a && b > c)
            cout << b << "\n";
        else if ((c > a && c < b) || (c < a && c > b))
            cout << c << "\n";
    }
    return 0;
}