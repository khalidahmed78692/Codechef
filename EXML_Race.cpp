#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    int dist, time;
    int fastest = 0;
    int label;
    for (int i = 1; i <= n; i++)
    {
        cin >> dist >> time;
        int speed = dist / time;
        if (speed > fastest)
        {
            fastest = speed;
            label = i;
        }
    }
    cout << label << endl;
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