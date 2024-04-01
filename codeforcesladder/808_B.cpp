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
    ll n, k, suml = 0, sumr = 0;
    cin >> n >> k;
    ll arr[200005];
    double  ans;
   fl(1,n+1){cin >> arr[i];}
   fl(1,n+1)
    {
        sumr += arr[i];
        if (i >= k)
        {
            suml += arr[i - k];
            ans += (sumr - suml);
        }
    }
    ans /= (n - k + 1);
    cout << fixed << setprecision(10) << ans << '\n';
}
int main()
{
    fast;
    solve();
}
