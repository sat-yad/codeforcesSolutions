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
    fast;
    int n;
    cin >> n;
    int ans = n;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n = n / i;
            ans += n;
        }
    }
    if (n > 1)
    {
        ans++;
    }
    cout << ans;
    nl;
}

int main()
{
    fast;
    solve();
}
