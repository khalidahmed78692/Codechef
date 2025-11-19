#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, x;
    cin >> n >> x;
    bool found = false;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val == x)
        {
            found = true;
        }
        smallest = min(smallest, val);
        largest = max(largest, val);
    }

    if (x < smallest || x > largest)
    {
        cout << "Yes";
    }
    else
    {
        if (found)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    cout << endl;
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