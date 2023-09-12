#include <iostream>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        s.resize(n);
        cin >>s;
        int mx = s[0];
        for(int i=0; i<s.length(); i++ )
        {
            if(s[i]>mx) mx = s[i];
        }
        cout << mx-96 <<"\n";
            
    }
    return 0;
}