#include <bits/stdc++.h>
using namespace std;

bool getFloor(int i, int x)
{
    return 10 * (i - 1) + 1 <= x && x <= 10 * i;
}

void solve()
{
    int x, y;
    cin >> x >> y;
    int floor_x;
    for (int i = 1; i <= 10; i++)
    {
        if (getFloor(i, x))
        {
            floor_x = i;
            break;
        }
    }
    int floor_y;
    for (int i = 1; i <= 10; i++)
    {
        if (getFloor(i, y))
        {
            floor_y = i;
            break;
        }
    }
    cout << abs(floor_x - floor_y) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
