#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        val += k;
        if (val % 7 == 0)
            ans++;
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
