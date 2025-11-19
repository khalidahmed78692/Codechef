#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> P(n);
    for (int i = 0; i < n; i++)
        cin >> P[i];
    int person = n;
    int disturb = 0;
    while (person > 0)
    {
        bool found = false;
        int before = 0, after = 0;
        for (int i = 0; i < n; i++)
        {
            if (found)
            {
                if (P[i] > 0)
                    after++;
            }
            else
            {
                if (P[i] == person)
                {
                    found = true;
                    P[i] = 0;
                }
                else if (P[i] > 0)
                {
                    before++;
                }
            }
        }
        disturb += min(before, after);
        person--;
    }
    cout << disturb << endl;
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