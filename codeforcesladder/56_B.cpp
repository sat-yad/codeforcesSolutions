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
    ll n, l=0, r;
    cin >> n;
    ll a[n + 1];
    for (ll i = 1; i <= n; i++)
        cin>>a[i];
    for (ll i = 1; i <= n; i++)
    {
        if (a[i] != i)
        {
            if (l == 0)
                l = i;
            r = i;
        }
    }
    if (l == 0)
    {
        cout<<"0 0";
        return ;
    }
    for (ll i = l; i <= r; i++)
    {
        if (a[i] != l+r-i)
        {
            cout<<"0 0";
            return ;
        }
    }
    cout<<l<<" "<<r;
}
int main()
{
    fast;
    solve();
}
// int gcd(int a, int b)
// {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }