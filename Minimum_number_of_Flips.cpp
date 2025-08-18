#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int countone = 0, countminusone = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
            countone++;
        else
            countminusone++;
    }
    if (n % 2)
    {
        cout << -1 << endl;
    }
    else
    {
        int diff = abs(countone - countminusone);
        cout << diff / 2 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
