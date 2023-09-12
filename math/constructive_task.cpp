/********************************************
 * Author : Mojnu                           *
 * Created : 12-02-2023 	 13:18:16       *
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
        if (n == 3)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            if (n % 2 == 0)
            {
                for (int i = 1; i <= n / 2; i++)
                {
                    cout << -1 << " " << 1 << " ";
                }
                cout << "\n";
            }
            else
            {
                for (int i = 1; i <= n / 2 + 1; i++)
                    i == n / 2 + 1 ? cout << n / 2 - 1 : cout << n / 2 - 1 << " " << -n / 2 << " ";
                cout << "\n";
            }
        }
    }

    return 0;
}