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
    map<int, string> mp;
    mp[0] = "Sheldon";
    mp[1] = "Leonard";
    mp[2] = "Penny";
    mp[3] = "Rajesh";
    mp[4] = "Howard";
    if (n <= 5)
        cout << mp[n - 1];
    else
    {
        ll g = 0;
        ll  sub = 5;
        while (n - sub > 0)
        {
            n -= sub;
            sub *= 2;
            g++;
        }
        cout << mp[n / pow(2, g )];
    }
}
int main()
{
    fast;
    solve();
}
