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
    int zeroes = 0, ones = 0;
    int count = 0;
    char c = s[0];
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
            count++;
        else
        {
            if (c == '0')
            {
                if (count > 1)
                    zeroes += count - 1;
            }
            else
            {
                if (count > 1)
                    ones += count - 1;
            }
            c = s[i];
            count = 1;
        }
    }

    if (count > 1)
    {
        if (c == '0')
        {
            zeroes += count - 1;
        }
        else
        {
            ones += count - 1;
        }
    }

    int diff = zeroes - ones;

    // int i = 0;
    // while (i < n && diff > 0)
    // {
    //     if (s[i] == '0')
    //         diff -= 2;
    // }
    if (diff > 0)
        cout << (diff + 1) / 2 << endl;
    else
        cout << 0 << endl;
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