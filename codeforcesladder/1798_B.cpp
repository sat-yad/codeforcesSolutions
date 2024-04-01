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
    int m;
    cin >> m;
    vector<vector<int>> v(m);
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        v[i] = arr;
    }
    vector<int> ans(m);
    set<int> s;
    for (int i = m - 1; i >= 0; i--)
    {
        set<int> s1;
        for (auto x : v[i])
        {
            if (s.find(x) == s.end())
                s1.insert(x);
            s.insert(x);
        }
        if (s1.size() == 0)
        {
            cout << -1 << endl;
            return;
        }
        ans[i] = *s1.begin();
    }

    for (int i = 0; i < m; i++)
        cout << ans[i] << " ";
    nl;
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