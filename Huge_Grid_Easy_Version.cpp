#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int ans = 0;
    int i = 0, j = 0;
    bool increasei = false;
    while (i < n && j < n)
    {
        if (i == j)
        {
            ans += a[i] - '0';
        }
        else
        {
            ans += (a[i] - '0') + (a[j] - '0');
        }

        if (increasei)
            i++;
        else
            j++;
        increasei = !increasei;
    }
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