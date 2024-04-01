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
    ll n, k, q;
    cin >> n >> k >> q;

    //   string s;
    //   cin>>s;
    ll arr[n];
    fl(0, n) cin >> arr[i];
    ll ans = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= q)
            curr++;
        else
        {
            if (curr >= k)
            {
                ll cnt = (curr + 1 - k);
                ans += (cnt * (cnt + 1)) / 2;
            }
            curr = 0;
        }
    }
    if (curr >= k)
    {
        ll cnt = (curr + 1 - k);
        ans += (cnt * (cnt + 1)) / 2;
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