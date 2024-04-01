#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w, n) for (ll i = w; i < n; i++)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cin.tie(nullptr);             \
    cout.tie(nullptr);
#define nl cout << "\n";
#define onjudge                                              \
#ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); \
    freopen("./output.txt", "w", stdout);                    \
#endif
void solve()
{
    int n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int sum = 0;
    int x[n + 10][2];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i][0] >> x[i][1];
    }
    sum = p1 * (x[0][1] - x[0][0]);
    for (int i = 1; i < n; i++)
    {
        sum += p1 * (x[i][1] - x[i][0]);
        int t = x[i][0] - x[i - 1][1];
        if (t <= t1)
            sum += t * p1;
        else if (t > t1 && t <= (t1 + t2))
            sum += t1 * p1 + (t - t1) * p2;
        else if (t > (t1 + t2))
            sum += t1 * p1 + t2 * p2 + (t - t1 - t2) * p3;
    }
    cout << sum << endl;
}
int main()
{
    fast;
    solve();
}
