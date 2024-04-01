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
    ll d, n, cnt = 0;
    cin >> d;
    cin >> n;
    ll arr[n];
    fl(0, n) { cin >> arr[i]; }
    fl(0, n - 1) { cnt += d - arr[i]; }
    cout << cnt;
    nl;
}
int main()
{
    fast;
    solve();
}
