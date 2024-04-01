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
    string s;
    cin >> s;
    int n = s.length(), cnt = 0;
    // cout<<n;nl;
    if (n == 1 && s[0] == '^')
    {
        cout << 1;
        nl;
        return;
    }
    if (n == 1 && s[0] == '_')
    {
        cout << 2;
        nl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1 && s[i] == '_')
            cnt++;
        if (s[0] == '_' && i == 0)
            cnt++;
        if (s[i] == s[i + 1] && s[i] == '_')
            cnt++;
    }
    cout << cnt;
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