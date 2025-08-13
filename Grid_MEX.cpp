#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            unordered_set<int> st;
            for (int k = i - 1; k >= 0; k--)
                st.insert(v[k][j]);
            for (int k = j - 1; k >= 0; k--)
                st.insert(v[i][k]);
            int mex = 0;
            while (st.find(mex) != st.end())
                mex++;
            v[i][j] = mex;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
