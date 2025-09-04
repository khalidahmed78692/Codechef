#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == 0)
    {
        while (m-- > 2)
            cout << "><";
        cout << ">=>";
    }
    else if (m == 0)
    {
        while (n-- > 2)
            cout << "<<";
        cout << "<=<";
    }
    else
    {
        while (n-- > 1)
            cout << "<<";
        cout << "<<>";
        while (m-- > 1)
            cout << "<>";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}