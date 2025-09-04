#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int x, y;
    cin >> x >> y;
    int val = 50 - (x + 2 * y);
    if (0 <= val && val <= 10)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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