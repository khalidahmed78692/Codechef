#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, p;
    cin >> n >> x >> p;
    int y = n - x;
    int score = 3 * x - 1 * y;
    if (score >= p)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
