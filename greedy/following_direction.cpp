#include <bits/stdc++.h>
using namespace std;

struct point
{
public:
    int x, y;
    point()
    {
        x = 0;
        y = 0;
    }
};

void ans(string s, int n)
{
    point p;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')
        {
            p.y++;
        }
        else if (s[i] == 'R')
        {
            p.x++;
        }
        else if (s[i] == 'D')
        {
            p.y--;
        }
        else
        {
            p.x--;
        }

        if (p.x == 1 && p.y == 1)
        {
            cout << "Yes\n";
            return;
        }
    }
    cout << "NO\n";
}
int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ans(s, n);
    }

    return 0;
}