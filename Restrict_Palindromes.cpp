#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string ans = "";
    int count = n / 5;
    n -= count * 5;
    while (count--)
        ans += "abcde";
    count = 0;
    while (n--)
    {
        ans += 'a' + count;
        count++;
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
