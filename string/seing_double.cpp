#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, tmp;
        cin >> s;
        tmp = s;
        reverse(s.begin(), s.end());
        cout << tmp + s << "\n";
    }

    return 0;
}