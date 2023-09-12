#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // sort(v.begin(), v.end());

    int sereja = 0, dima = 0;
    bool turn = true;
    while (!v.empty())
    {
        if (turn)
        {
            sereja += v.front() >= v.back() ? v.front() : v.back();
        }
        else
        {
            dima += v.front() >= v.back() ? v.front() : v.back();
        }
        v.front() >= v.back() ? v.erase(v.begin()) : v.erase(v.end()-1);
        turn = !turn;
    }

    cout << sereja << " " << dima << "\n";

    return 0;
}
