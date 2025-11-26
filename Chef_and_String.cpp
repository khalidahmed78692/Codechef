#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    char last = '_';
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != 'I')
        {
            last = s[i];
            break;
        }
    }
    if (last == '_')
    {
        cout << n * k - 1 << endl;
        return;
    }

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            s[i] = last;
        }
        else
        {
            last = s[i];
        }
    }

    ll count = 0;
    for (ll i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
            count++;
    }

    ll ans = count * k;

    ans += (k - 1) * (s[0] == s[n - 1]);

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