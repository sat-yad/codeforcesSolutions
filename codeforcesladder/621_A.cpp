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
    ll n, a, cnt = 0, pr = 0;
    cin >> n;
    vector<ll> odd;
    fl(0, n)
    {
        cin >> a;
        if (a % 2)
        {
            cnt++;
            odd.push_back(a);
        }
        else
            pr += a;
    }
    sort(odd.begin(), odd.end());
    if (cnt % 2)
    {
        for (ll i = odd.size() - 1; i > 0; i--)
            pr += odd[i];
    }
    else
        for (int i = 0; i < odd.size(); i++)
            pr += odd[i];
    cout << pr;
    nl;
}
int main()
{
    fast;
    solve();
}
