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
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve()
{
    ll n, x;
    cin >> n;
    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        cin >> x;
        mp[x] = i;
    }
    ll maxi = -1;
    for (auto i : mp)
    {
        for (auto j : mp)
        {
            if (gcd(i.first , j.first) == 1)
                maxi = max(i.second + j.second, maxi);
        }
    }
    cout << maxi;
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