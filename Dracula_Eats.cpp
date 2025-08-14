#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    int weeks = n / 7;
    n -= 7 * weeks;
    if (n > 1)
        ans++;
    ans += weeks;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
