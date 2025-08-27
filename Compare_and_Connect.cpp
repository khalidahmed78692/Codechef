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
        cout << ">";
        while (m-- > 2)
            cout << "<>";
        cout << "=>";
    }
    else if (m == 0)
    {
        cout << '<';
        while (n-- > 2)
            cout << "<<";
        cout << "=<";
    }
    else
    {
        cout << '<';
        while (n--)
            cout << '<';
        while (m--)
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