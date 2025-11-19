#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    vector<int> B;
    for (int i = 0; i < n; i++)
        B.push_back(A[i]);
    sort(B.begin(), B.end());
    unordered_map<int, pair<int, int>> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[B[i]].first = -1;
        if (i - 1 >= 0)
            mpp[B[i]].first = B[i - 1];
        mpp[B[i]].second = -1;
        if (i + 1 < n)
            mpp[B[i]].second = B[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        if (mpp[A[i]].first == -1 || mpp[A[i]].second == -1)
        {
            cout << -1 << " ";
        }
        else
        {
            int diff1 = abs(A[i] - mpp[A[i]].first);
            int diff2 = abs(A[i] - mpp[A[i]].second);
            cout << (diff1 + diff2) / 2 << " ";
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