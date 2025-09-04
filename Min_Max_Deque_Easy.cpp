#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // vector<pair<int, int>> ix;
    // int i, x;
    // for (int i = 0; i < q; i++)
    // {
    //     cin >> i >> x;
    //     ix.push_back({i, x});
    // }

    int l = v[0], r = v[1];
    bool aturn = true;
    for (int idx = 2; idx < n; idx++)
    {
        if (aturn)
        {
            if (l == r)
                l = v[idx];
            else if (l < r)
            {
                if (v[idx] < l)
                    r = v[idx];
                else
                    l = v[idx];
            }
            else
            {
                if (v[idx] < r)
                    l = v[idx];
                else
                    r = v[idx];
            }
        }
        else
        {
            if (l == r)
            {
                l = v[idx];
            }
            else if (l < r)
            {
                if (v[idx] < l)
                    l = v[idx];
                else
                    r = v[idx];
            }
            else
            {
                if (v[idx] < r)
                    r = v[idx];
                else
                    l = v[idx];
            }
        }
        aturn = !aturn;
    }
    // cout << "L: " << l << " R: " << r << endl;
    cout << min(l, r) << endl;
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