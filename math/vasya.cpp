#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int f = min(a, b);
    int m = max(a, b);
    int d = (m - f) / 2;

    cout << f << " " << d << '\n';

    return 0;
}