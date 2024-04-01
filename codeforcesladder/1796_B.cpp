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
    string a, b;
    cin >> a >> b;
    ll n1 = a.size(), n2 = b.size();
    if (a[0] == b[0])
    {
        cout << "YES";
        nl;
        cout << a[0] << "*";
        nl;
        return;
    }
    else if (a[n1 - 1] == b[n2 - 1])
    {
        cout << "YES";
        nl;
        cout << "*" << a[n1 - 1];
        nl;
        return;
    }
    else
    {
        bool flag = true;
        for (ll i = 0; i < n1 - 1; i++)
        {
            for (ll j = 0; j < n2 - 1; j++)
            {
                if (a[i] == b[j] && a[i + 1] == b[j + 1])
                {
                    cout << "YES";
                    nl;
                    cout << "*" << a[i] << a[i + 1] << "*";
                    nl;
                    return;
                }
            }
        }
        cout << "NO";
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