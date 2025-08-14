#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int packs = n / 5;
    int coins = 4 * packs + n % 5;
    cout << coins << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
