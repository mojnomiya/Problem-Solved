#include <iostream>
using namespace std;

bool isPresent(char c)
{
    string s = "codeforces";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        isPresent(c) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}