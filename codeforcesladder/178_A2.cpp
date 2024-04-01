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
    int n, c;
    cin >> n;
    ll a[10050];
    ll t = 0;
    c = n;
    if (c % 2 == 1)
    {
        c = n - 1;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (c + i > n)
        {
            c /= 2;
        }

        a[c + i] += a[i];
        // cout<<a[c+i]<<" t+i "<<c+i<<" t "<<t<<" i "<<i<<endl;
        a[i] += a[i - 1];
    }
    for (int i = 1; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
int main()
{
    fast;
    solve();
}
