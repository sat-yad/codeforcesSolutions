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
    ll m, n;
    cin >> n >> m;
    ll a, mx = 0, mn = 0;
    priority_queue<ll> mnn, mxx;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        mxx.push(a);
        mnn.push(-a);
    }
    ll tmp = n;

    while (tmp > 0)
    {
        a = mxx.top();
        mxx.pop();
        mx += a;
        a--;
        tmp--;
        if (a > 0)
            mxx.push(a);
    }
    tmp = n;

    while (tmp > 0)
    {
        a = mnn.top();
        mnn.pop();
        mn -= a;
        a++;
        tmp--;
        if (a < 0)
            mnn.push(a);
    }
    cout << mx << " " << mn << endl;
}
int main()
{
    fast;
    solve();
}
