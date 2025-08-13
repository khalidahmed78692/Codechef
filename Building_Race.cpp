#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    float timechef = (float)a / x;
    float timechefina = (float)b / y;
    if (timechef == timechefina)
        cout << "Both" << endl;
    else if (timechef < timechefina)
        cout << "Chef" << endl;
    else
        cout << "Chefina" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
