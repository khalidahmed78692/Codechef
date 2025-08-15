#include <bits/stdc++.h>
using namespace std;

int main()
{
    int runs, overs, current_score;
    cin >> runs >> overs >> current_score;

    int rem_overs = 20 - overs;
    int rem_score = runs - current_score;

    int max_score = rem_overs * 6 * 6;

    if (max_score > rem_score)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
