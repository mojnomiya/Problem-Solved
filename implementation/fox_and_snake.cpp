#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j == 1 && i % 4 == 0)
                cout << "#";
            else if (j == m && i % 4 != 0)
                cout << "#";

            else if (i % 2 == 0)
            {
                cout << ".";
            }
            else
                cout << "#";
        }
        cout << "\n";
    }
    return 0;
}