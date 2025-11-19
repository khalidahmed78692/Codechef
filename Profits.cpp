#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, x;
    cin >> n >> x;
    if (x >= n)
    {
        cout << 0 << endl;
    }
    else
    {
        int profit = n - x;
        cout << profit * (profit + 1) / 2 << endl;
    }
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