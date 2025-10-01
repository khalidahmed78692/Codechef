#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    int one = 0, two = 0, three = 0;
    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val == 1)
            one++;
        else if (val == 2)
            two++;
        else
            three++;
    }
    int ans = one * (one - 1) / 2;
    ans += one * two;
    ans += two * three;
    cout << ans << endl;
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