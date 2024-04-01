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
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    fl(0, n) { cin >> arr[i]; }
    vector<ll> v;
    fl(0, 1001)
    {
        if (pow(k, i) > 1e16 + 9)
        {
            break;
        }
        else
        {
            v.push_back(pow(k, i));
        }
    }
    sort(arr, arr + n);
    for (ll i = n - 1; i >= 0; i--)
    {
        for (ll j = v.size() - 1; j >= 0; j--)
        {
            if (arr[i] >= v[j])
            {
                arr[i] -= v[j];
                v[j] = 0;
            }
        }
    }
    ll sum = 0;
    fl(0, n) { sum += arr[i]; }
    if (sum)
    {
        cout << " NO";
        nl;
    }
    else
    {
        cout << "YES";
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