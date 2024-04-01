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
    ll n, l;
    cin >> n >> l;
    ll arr[n];
    double mxdiff = INT_MIN;
    fl(0, n) cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) > mxdiff)
            mxdiff = abs(arr[i] - arr[i + 1]);
    }
    double mx1 = l - arr[n - 1], mx2 = arr[0] - 0;
    cout <<fixed<<setprecision(10)<<max({mxdiff / 2, mx1, mx2});
    nl;
}
int main()
{
    fast;
    solve();
}
