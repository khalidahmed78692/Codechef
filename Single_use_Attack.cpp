#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int h, x, y;
    cin >> h >> x >> y;
    int attack = 0;
    if (y > x)
    {
        attack++;
        h -= y;
    }
    attack += h / x;
    if (h % x)
        attack++;
    cout << attack << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
