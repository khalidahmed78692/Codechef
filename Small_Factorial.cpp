#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long fact = 1;
    while (n)
    {
        fact *= n;
        n--;
    }
    cout << fact << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
