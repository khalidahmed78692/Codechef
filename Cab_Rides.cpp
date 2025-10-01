#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    if (n == 1)
    {
        ans = 200;
    }
    else
    {
        int val = n / 2;
        if (n % 2)
        {
            ans = (val - 1) * 200 + 300;
        }
        else
        {
            ans = val * 200;
        }
    }
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