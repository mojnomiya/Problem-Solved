#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    string PI = "314159265358979323846264338327";
    int ans = 0;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == PI[i])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << "\n";
        ans=0;
    }
    return 0;
}