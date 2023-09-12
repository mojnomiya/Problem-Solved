#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i, j, ans = 0;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (a[i] == b[j])
                {
                    ans = a[i];
                    cout << "YES"
                         << "\n1"
                         << " " << ans << "\n";
                    break;
                }
            }
            if (j != m)
                break;
        }
        if (i == n)
            cout << "NO\n";
    }

    return 0;
}