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
    int n = s.size(), c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    int k = min(c1, c2);
    if ((k ^ 1) == k + 1)
    {
        cout << "NET";
        nl;
    }
    else
    {
        cout << "DA";
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