#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    bool possible = true;
    for (int i = 1; i < n; i++)
    {
        if ((A[i - 1] < A[i] && B[i - 1] > B[i]) || (A[i - 1] > A[i] && B[i - 1] < B[i]))
        {
            possible = false;
            break;
        }
    }
    if (possible)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
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