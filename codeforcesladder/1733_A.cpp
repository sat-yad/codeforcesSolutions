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
    ll n, k, s = 0;
    cin >> n >> k;
    ll arr[n], brr[110] = {0};
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        ll a = i % k;
        if (brr[a] < arr[i])
        {
            brr[a] = arr[i];
        }
    }
    for (ll i = 0; i <= k; i++)
    {
        s += brr[i];
    }
    cout << s;
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