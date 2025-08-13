#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans;
    if (n & 1)
    {
        ans = (n + 1) / 2;
    }
    else
    {
        ans = n / 2 + (n - n / 2 + 1) / 2;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
