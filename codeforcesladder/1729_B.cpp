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
    int n; string s;
    cin >> n;cin >> s;
    vector<char> v;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] != '0')
        {
            char c = s[i] - '0' + 'a' - 1;
            v.push_back(c);
        }
        else
        {
            char c = s[i - 1] - '0' + 'a' - 1 + (s[i - 2] - '0') * 10;
            v.push_back(c);
            i -= 2;
        }
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }
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