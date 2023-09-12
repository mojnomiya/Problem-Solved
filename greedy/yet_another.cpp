/********************************************
 * Author : Mojnu                           *
 * Created : 12-02-2023 	 14:50:30       *
 ********************************************/

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, m;
        cin >> a >> b >> n >> m;
        int t1=0;
        int t2 = n / (m + 1);
        int t3 = n % (m + 1);

        if (n % (m + 1) == 0)
            t1 = t2 * a * m;
        else
        {
            t1 = t2 * a * m;
            t1 += (min(t3 * b, t3 * a));
        }
        int t4 = min(n * a, n * b);
        cout << min(t4, t1) << endl;
    }

    return 0;
}