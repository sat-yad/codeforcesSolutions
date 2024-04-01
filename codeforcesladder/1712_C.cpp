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
#define N 100005
void solve()
{
    int n, a[N];
    int d[N];
    bool p[N];
    cin >> n;
    memset(a, 0, sizeof a);
    memset(d, 0, sizeof d);
    memset(p, 0, sizeof p);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        d[a[i]] = i;
    }
    int maxm = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            maxm = d[a[i]];
            i = maxm;
        }
    }
    for (int i = 1; i <= maxm; i++)
    {
        maxm = max(maxm, d[a[i]]);
    }
    int ans = 0;
    for (int i = 1; i <= maxm; i++)
    {
        if (!p[a[i]])
            ans++;
        p[a[i]] = 1;
    }
    cout << ans << endl;
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