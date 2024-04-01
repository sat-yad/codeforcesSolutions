#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w, x) for (ll i = w; i < x; i++)
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
    int n;
    cin >> n;
    int a[n][n];
    int ans[110];
    fl(0,n) ans[i]=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> a[i][j];
        }
    }
    if (a[1][0] == a[0][0] || a[1][0] == a[2][0])
    {
        ans[0] = a[1][0];
    }
    else
    {
        ans[0] = a[0][0];
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[0] != a[i][0])
        {
            for (int j = 0; j < n - 1; j++)
            {
                ans[j + 1] = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    nl;
}
int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
// 5
// 4 2 1 3
// 2 1 3 5
// 4 2 3 5
// 4 1 3 5
// 4 2 1 5