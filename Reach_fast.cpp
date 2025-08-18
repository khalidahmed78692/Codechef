#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, k;
    cin >> a >> b >> k;
    int diff = abs(a - b);
    int steps = diff / k;
    if (diff % k)
        steps++;
    cout << steps << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
