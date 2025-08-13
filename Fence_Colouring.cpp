#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        m[temp]++;
    }
    int max_freq = 0;
    int max_ele = -1;
    for (auto it : m)
    {
        if (it.second > max_freq)
        {
            max_freq = it.second;
            max_ele = it.first;
        }
    }
    int ans = 0;
    if (max_ele == 1)
    {
        ans = n - max_freq;
    }
    else
    {
        ans = n - max_freq + 1;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
