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
    ll n, cnt = 0, cnt1 = 0, i = 0, m = 0;
    cin >> n; int k=(-1+sqrt(1+8*n))/2;
    vector<int> v;
    for (;i<=k;)
    {
        if (cnt + cnt1 < n)
            cnt += i;
        else
            break;
        i += 1;
        if (cnt + cnt1 < n)
            cnt += i;
        else
            break;
        i += 1;
        if (cnt + cnt1 < n)
            cnt1 += i;
        else
            break;
        i += 1;
        if (cnt + cnt1 < n)
            cnt1 += i;
        else
            break;
         i+=1;
    }
    cout<<cnt<<" "<<cnt1;nl;
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