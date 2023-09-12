#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    int x = 0;
    for (int value : v)
    {
        cin >> value;
        x += value;
    }
    if (x)
        cout << "HARD\n";
    else
        cout << "EASY\n";

    return 0;
}