#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n), tmp(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
            tmp[i] = v[i];
        }
        sort(tmp.begin(), tmp.end());
        for (long long int i = 0; i < n; i++)
        {
            if (v[i] != tmp[n - 1])
            {
                cout << v[i] - tmp[n - 1] << " ";
            }
            else
            {
                cout << v[i] - tmp[n - 2] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}