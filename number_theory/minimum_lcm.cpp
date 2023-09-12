 /********************************************
* Author : Mojnu                           *
* Created : 15-02-2023 	 23:39:34       *
********************************************/
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a=1;
        for(int i=2; i*i<=n; i++)
        {
            if(n % i == 0)
            {
                a = n / i;
                break;
            }
        }
        cout<< a << " " << n-a <<"\n";
    }

    return 0;
}