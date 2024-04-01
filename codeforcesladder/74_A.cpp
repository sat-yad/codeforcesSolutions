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
    int n, max = INT_MIN;
    string ans;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int a, b, arr[5], sum = 0;
        cin >> a >> b;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        sum += a * 100 - b * 50;
        // cout << sum << endl;
        if (sum >= max)
        {
            max = sum;
            ans = s;
        }
    }
    cout << ans << endl;
}
int main()
{
    fast;
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
// 5
// Petr 3 1 490 920 1000 1200 0
// tourist 2 0 490 950 1100 1400 0
// Egor 7 0 480 900 950 0 1000
// c00lH4x0R 0 10 150 0 0 0 0
// some_participant 2 1 450 720 900 0 0
