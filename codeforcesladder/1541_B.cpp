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
    int n, cnt = 0;
    cin >> n;
    ll a[n + 1], b[2 * (n + 1)];
    fl(1, n + 1)
    {
        cin >> a[i];
        b[a[i]] = i;
    }
    sort(a + 1, a + n + 1);
    fl(1, n + 1)
    {
        for (int j = i + 1; j <= n && a[i] * a[j] < 2 * n; j++)
        {
            if (a[i] * a[j] == b[a[i]] + b[a[j]])
                cnt++;
        }
    }
    cout << cnt;
    nl;
}
signed main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}