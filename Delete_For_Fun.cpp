#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int score = 0;
    bool possible = true;
    vector<int> ans;
    while (!s.empty())
    {
        int prev_index = max(k - 1, (int)s.size() - 1);
        int next_index = (k + 1) % (s.size() - 1) + 1;

        cout << "prev_index: " << prev_index << " next_index: " << next_index << endl;

        if (k % 2)
        {
            score += s[k - 1] - '0';
        }
        else
        {
            score -= s[k - 1] - '0';
        }
        cout << score << endl;

        if (score <= 0)
        {
            possible = false;
            break;
        }
        else
        {
            ans.push_back(k);
        }

        s.erase(s.begin() + k - 1);
        cout << s << endl;

        if (s[prev_index - 1] == '0')
        {
            k = prev_index;
        }
        else if (s[next_index - 1] == '0')
        {
            k = next_index;
        }
        else
        {
            if ((prev_index) % 2)
                k = prev_index;
            else
                k = next_index;
        }
    }

    if (possible)
    {
        // cout<<ans.size()<<endl;
        for (int a : ans)
        {
            cout << a << " ";
        }
    }
    else
    {
        cout << -1;
        // cout<<"yes";
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