#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    lli n, k;
    cin >> n >> k;
    lli smallest = INT_MAX, secondsmallest = INT_MAX;
    lli temp;
    lli ans = 0;
    for (lli i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp <= smallest)
        {
            secondsmallest = smallest;
            smallest = temp;
        }
        else if (temp < secondsmallest)
            secondsmallest = temp;
        ans += temp;
    }
    // cout<<"smallest: "<<smallest<<" secondsmallest: "<<secondsmallest<<endl;
    lli val = ceil(((float)smallest + secondsmallest) / 2);
    // cout<<"val: "<<val<<endl;
    ans += (k * val);
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