#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    s.resize(n);
    cin >> s;
    int pangram = 0;
    for (int i = 0; i < n; i++)
    {
        s[i] = toupper(s[i]);
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
            pangram++;
    }
    if (pangram == 26)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}