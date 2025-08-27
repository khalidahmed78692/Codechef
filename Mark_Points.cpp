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

    int onecount = 0;
    bool foundone = false, flag = true;
    for (char ch : s)
    {
        if (ch == '1')
        {
            foundone = true;
            onecount++;
        }
        else
        {
            if (foundone && onecount < 3)
            {
                flag = false;
                break;
            }
            foundone = false;
            onecount = 0;
        }
    }
    if (foundone && onecount < 3)
        cout << "No" << endl;
    else if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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