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
#define N 510
void solve()
{
    ll n, m, ans, cnt = 0;
    cin >> n >> m;
    int a[N][N];
    char s[N][N];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> s[i][j];
            a[i][j] = s[i][j] - '0';
            if (a[i][j] == 1)
                cnt++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i + 1 <= n && j + 1 <= m && a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1] <= 2)
            {
                cout << cnt;
                nl;
                return;
            }
        }
    }
    if (cnt == n * m)
    {
        cout << cnt - 2;
        nl;
    }
    else
    {
        cout << cnt - 1;
        nl;
    }
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