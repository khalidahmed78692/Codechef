#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    int m = n * (n - 1) / 2;
    vector<int> w(m);
    for (int i = 0; i < m; i++)
        cin >> w[i];

    sort(w.begin(), w.end());
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
        ans += w[i];
    cout << ans << endl;
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