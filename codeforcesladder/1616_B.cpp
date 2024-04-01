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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string x, y;
    x = "";
    if (n == 1)
        cout << s[0] << s[0] << endl;
    else
    {
        x += s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] < s[i - 1] || (s[i] == s[i - 1] && s[i] < s[0]))
                x += s[i];
            else
                break;
        }
        cout << x;
        reverse(x.begin(), x.end());
        cout << x << endl;
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