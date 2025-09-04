#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int x, h;
    cin >> x >> h;
    int ans = 24 * (x - 4) + h;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t = 1;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}