#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int second_largest;
    if (a >= b && a >= c)
    {
        if (b >= c)
            second_largest = b;
        else
            second_largest = c;
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
            second_largest = a;
        else
            second_largest = c;
    }
    else
    {
        if (a >= b)
            second_largest = a;
        else
            second_largest = b;
    }
    cout << second_largest << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
