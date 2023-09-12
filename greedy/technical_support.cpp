#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> qa;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'Q')
                qa.push(s[i]);
            else
            {
                if (qa.empty())
                    qa.push(s[i]);
                else
                {
                    qa.pop();
                }
            }
        }
        (qa.empty() || qa.top() == 'A') ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}