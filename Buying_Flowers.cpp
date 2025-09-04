#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;

    int coins = 5 * (n / 3);
    if (n % 3 == 1)
    {
        coins -= 5;
        coins += 2 * 4;
    }
    else if (n % 3 == 2)
    {
        coins += 4;
    }
    cout << coins << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}