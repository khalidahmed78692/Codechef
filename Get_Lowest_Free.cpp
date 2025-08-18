#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int lowest = min({a, b, c});
    int price = a + b + c - lowest;
    cout << price << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
