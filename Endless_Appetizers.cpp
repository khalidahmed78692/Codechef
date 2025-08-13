#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, r;
    cin >> x >> y >> r;
    x += r / 30;
    int plates = x / y;
    if (x % y)
        plates++;
    cout << plates << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
