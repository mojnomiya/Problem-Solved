#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string yes = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    while (t--)
    {
        string s;
        cin >> s;
        if (yes.find(s) != string::npos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}