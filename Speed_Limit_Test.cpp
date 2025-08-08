#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, x, b, y;
    cin >> a >> x >> b >> y;
    float alicespeed = (float)a / x;
    float bobspeed = (float)b / y;
    if (alicespeed == bobspeed)
        cout << "Equal" << endl;
    else if (alicespeed > bobspeed)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
