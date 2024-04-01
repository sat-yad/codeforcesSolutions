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
#define mod 1000000007
void solve()
{
    ll t, x, pr = 1, ans = 1;
    cin >> t;
    ll n = t;
    while (t--)
    {
        cin >> x;
        pr *= x;
        // cout<<pr;nl;
        pr %= mod;
        // cout<<pr;nl;
    }
    while (n > 0)
    {
        if (n & 1 == 1)
            ans = (ans * pr) % mod;
        pr = (pr * pr) % mod;
        n = n >> 1;
    }
    cout << ans;
}
int main()
{
    fast;
    solve();
}
