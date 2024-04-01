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
    int c2 = 0, c1 = 0, x = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            x = 1;
            c1 = c2;
        }
        else if (s[i] == '0' && x == 1)
        {
            // cout<< x <<endl;
            c2++;
            // cout<< n << endl;
        }
    }
    cout << c1 << endl;
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