#include <bits/stdc++.h>
using namespace std;

// int size(string s, int n)
// {
//     if(s.size()<=1) return 1;

//     while (s.front() != s.back())
//     {
//         if (s.front() != s.back())
//         {
//             s.erase(s.begin());
//             s.pop_back();
//         }
//     }

//     return s.size();
// }

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 0, r = n - 1, ans = n;
        while (l <= r)
        {
            if ((s[l] == '1' and s[r] == '0') or (s[l] == '0' and s[r] == '1'))
            {
                ans -= 2;
                l++;
                r--;
            }
            else
                break;
        }
        cout << ans << "\n";
    }
    return 0;
}