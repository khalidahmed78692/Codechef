#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int hb = 0;
    int size = 0;
    int temp;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        if (temp > size)
        {
            size = temp;
            hb = i;
        }
    }
    cout << hb << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
