#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int c = y / x;
    int v = n / c;
    if (n % c)
        v++;
    cout << v << endl;
}
