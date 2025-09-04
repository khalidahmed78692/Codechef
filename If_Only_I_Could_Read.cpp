#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l, r;
    bool ans = false;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            l = i;
            r = i + 1;
            ans = true;
            break;
        }
    }

    if (ans)
    {
        cout << l << " " << r << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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