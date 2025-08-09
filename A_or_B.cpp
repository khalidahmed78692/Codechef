#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    // choose a first
    int ascore = (500 - x * 2) + (1000 - x * 4 - y * 4);
    // choose b first
    int bscore = (1000 - y * 4) + (500 - y * 2 - x * 2);
    cout << max(ascore, bscore) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
