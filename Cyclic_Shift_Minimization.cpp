#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    bool odd = false;
    if (n % 2)
        odd = true;
    if (odd)
        n--;
    int num = 2;
    for (int i = 0; i < n; i += 2)
    {
        arr[i] = num;
        num += 2;
    }
    num = 1;
    for (int i = 1; i < n; i += 2)
    {
        arr[i] = num;
        num += 2;
    }
    if (odd)
    {
        n++;
        arr[n - 1] = n;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
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