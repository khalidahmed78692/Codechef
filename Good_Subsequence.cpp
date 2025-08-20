#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // starts with odd
    int oddcount = 0;
    bool odd = true;
    for (int i = 0; i < n; i++)
    {
        if (odd)
        {
            if (v[i] % 2 == 1)
            {
                oddcount++;
                odd = !odd;
            }
        }
        else
        {
            if (v[i] % 2 == 0)
            {
                oddcount++;
                odd = !odd;
            }
        }
    }

    // starts with even
    int evencount = 0;
    odd = false;
    for (int i = 0; i < n; i++)
    {
        if (odd)
        {
            if (v[i] % 2 == 1)
            {
                evencount++;
                odd = !odd;
            }
        }
        else
        {
            if (v[i] % 2 == 0)
            {
                evencount++;
                odd = !odd;
            }
        }
    }

    cout << max(oddcount, evencount) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
