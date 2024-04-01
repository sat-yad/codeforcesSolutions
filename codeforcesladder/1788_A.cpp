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
    ll arr[15] = {0, 4, 45, 445, 4455, 44455, 444555, 4444555, 44445555, 444445555};
    ll tmp = n / 2, cnt = 0;
    while (tmp % 10 == 9)
    {
        cnt++;
        tmp /= 10;
    }
    cout << n / 2 - arr[cnt] << " " << n - n / 2 + arr[cnt] << endl;
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