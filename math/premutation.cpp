/********************************************
 * Author : Mojnu                           *
 * Created : 10-02-2023 	 23:20:55       *
 ********************************************/
#include <bits/stdc++.h>
using namespace std;

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
        vector<vector<int>> perm(n, vector<int>(n - 1));
        vector<int> p(n + 1);
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            p[i] = i + 1;
            for (int j = 0; j < n - 1; j++)
            {
                cin >> perm[i][j];
                if (j == 0)
                {
                    cnt[perm[i][j]]++;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == n - 1)
            {
                p[0] = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (perm[i][0] != p[0])
            {
                for (int j = 0; j < n; j++)
                {
                    p[j + 1] = perm[i][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << p[i] << " ";
        cout << "\n";
    }

    return 0;
}