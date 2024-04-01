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
    ll n;
    cin >> n;
    ll a[n];
    fl(0, n) cin >> a[i];
    reverse(a, a + n);
    for (ll i = 0; i < n; i++)
        a[i] = a[i] + i;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
        mp[a[i]]++;
    ll sum = 0;
    for (auto i : mp)
    {
        if (i.second > 1)
            sum += i.second * (i.second - 1) / 2;
    }
    cout << sum;
    nl;
    // unordered_map<ll,ll> mp;
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