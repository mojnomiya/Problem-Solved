/********************************************
 * Author : Mojnu                           *
 * Created : 11-02-2023 	 15:41:29       *
 ********************************************/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + m);
    for (int i = 0; i < n + m; i++)
    {
        int in;
        cin >> in;
        {
            a.push_back(in);
        }
    }
    // for(auto it:a)
    //     cout<<it<<" ";
    // cout <<endl;

    // for(auto it:b)
    //     cout<<it<<" ";
    // cout <<endl;
    sort(a.begin(), a.end() - 1);
    reverse(a.begin(), a.end());
    // sort(b.rbegin(), b.rend());
    // for(auto it:b)
    //     cout<<it<<" ";
    // cout <<endl;

    // for (int i = 0; i < m && i<n; i++)
    // {
    //     a[i] = b[i];
    // }
    // for(auto it:a)
    //     cout<<it<<" ";
    // cout <<endl;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << "\n";
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
