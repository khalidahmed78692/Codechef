#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int bags = n / 10;
    if (n % 10)
        bags++;
    cout << bags << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
