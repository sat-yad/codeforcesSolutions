#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w, x) for (int i = w; i < x; i++)
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
    ll arr[n];
    vector<ll> crr;
    fl(0, n) { cin >> arr[i]; }
    sort(arr, arr + n);
    // for (int i=0;i<n;i++)
    // {
    //     cout << arr[i] << " ";
    // }nl;
    for (int i = 0; i < n ; i++)
    {
        int x = n - i - 1;
        crr.push_back(arr[i]);
        crr.push_back(arr[x]);
    }
    // reverse(crr.begin(),crr.end());
    for (int i = n - 1; i >= 0; i--)
    {
        cout << crr[i] << " ";
    }
    nl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
