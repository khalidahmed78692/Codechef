#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, x, k;
    cin >> n >> x >> k;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    sort(A.rbegin(), A.rend());

    for (int i = 0; i < k; i++)
    {
        A[i] = 0;
        x += 100;
    }

    int rank = 1;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > x)
            rank++;
    }

    cout << rank << endl;
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