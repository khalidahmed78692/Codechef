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

    sort(A.begin(), A.end());
    int lowest = A[0];
    int highest = A[n - 1];

    int gcnd = highest - 1;
    if (highest - lowest == 1)
    {
        gcnd = highest - 2;
    }
    cout << gcnd << endl;
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