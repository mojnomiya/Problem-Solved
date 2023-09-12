#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    string t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}