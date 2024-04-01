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
    ll n,ans=LLONG_MIN;
    cin >> n;
    ll arr[n];
    fl(0, n) cin >> arr[i];
    for (ll i = 0; i < n; i++)
    {
        ll cur = arr[i];
        ll cnt = 0;
        // cout<<cur<<" "<<"bal"<<endl;
        for (ll j = i + 1; j < n; j++)
        {
            ll now = arr[j];
            if (now <= cur)
            {
                cnt++;
            }
            if (now > cur)
            {
                break;
            }
            cur = now;
        }
        cur=arr[i];
        for (ll j = i - 1; j >= 0; j--)
        {
            ll now = arr[j];
            if (now <= cur)
            {
                cnt++;
            }
            if (now > cur)
            {
                break;
            }
            cur = now;
            // cout<<ok<<endl;
        
        }
        ans = max(ans,cnt);
    }
    cout << ans + 1;
    nl;
}
    int main()
    {
        fast;
        solve();
}
