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
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            v.push_back(i);
    }
    for (int i = 0; i < n; i++)
    {
        int ans = n;
        int idx = lower_bound(v.begin(), v.end(), i) - v.begin();
        // cout<<"p="<<v[idx]<<endl;;
        if (idx != 0)
        {
            // cout<<"q="<<v[idx-1]<<endl;
            ans = abs(v[idx - 1] - i);
        }
        ans = min(abs(v[idx] - i), ans);
        cout << ans << " ";
    }
}
int main()
{
    fast;
    solve();
}
