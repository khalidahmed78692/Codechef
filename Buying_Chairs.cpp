#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int w, p, k;
    cin >> w >> p >> k;
    int stylishness = 0;
    if (k <= w)
    {
        stylishness = 2 * k;
    }
    else
    {
        stylishness = 2 * w + (k - w);
    }
    cout << stylishness << endl;
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