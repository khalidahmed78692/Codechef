#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool gotzero = false;
    int ans = 0;
    for (char c : s)
    {
        if (c == '0')
        {
            gotzero = true;
        }
        if (gotzero && c == '1')
        {
            ans++;
        }
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