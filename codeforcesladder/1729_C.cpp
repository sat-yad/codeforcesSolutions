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

    ll idx = 0, idy = 1;

    string tmp;
    ll sum = s[0] - '0';
    sum += s[1] - '0';
    tmp = to_string(sum);

    for (ll i = 0; i < s.size() - 1; i++)
    {
        ll x = s[i] - '0';
        ll y = s[i + 1] - '0';
        ll xy = x + y;

        if (xy >= 10)
        {
            tmp = to_string(xy);
            idx = i;
            idy = i + 1;
        }
    }

    string res;

    for (ll i = 0; i < idx; i++)
    {
        res += s[i];
    }
    res += tmp;
    for (ll i = idy + 1; i < s.size(); i++)
    {
        res += s[i];
    }

    cout << res << endl;
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
