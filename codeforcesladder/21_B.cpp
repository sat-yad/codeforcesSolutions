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
bool pall(ll a1, ll b1, ll c1, ll a2, ll b2, ll c2)
{
    return a1 * b2 == a2 * b1;
}
bool sameline(ll a1, ll b1, ll c1, ll a2, ll b2, ll c2)
{
    return a1 * b2 == a2 * b1 && b1 * c2 == b2 * c1 && a1 * c2 == a2 * c1;
}
bool intersect(ll a1, ll b1, ll c1, ll a2, ll b2, ll c2)
{
    return a1 * b2 != a2 * b1;
}
void solve()
{
    ll a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1 == 0 && b1 == 0 && a2 == 0 && b2 == 0)
    {
        if (c1 == 0 && c2==0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        return;
    }

    if (pall(a1, b1, c1, a2, b2, c2))
    {
        if (sameline(a1, b1, c1, a2, b2, c2))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        cout << 1 << endl;
    }
}
int main()
{
    fast;
    solve();
}