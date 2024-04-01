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
    ll a, s;
    cin >> a >> s;
    vector<int> ans;
    bool flag = false;
    while (s)
    {
        int x = a % 10, y = s % 10;
        if (x <= y)
            ans.push_back(y - x);
        else
        {
            s /= 10;
            y += (s % 10) * 10;
            if (y > x && y < 19 && y >= 10)
                ans.push_back(y - x);
            else
            {
                flag = true;
                // cout<<y<<"#"<<endl;
                break;
            }
        }
        a /= 10;
        s /= 10;
    }
    if (a)
        flag = true;
    // cout<<a<<"#"<<endl;
    if (flag)
        cout << -1 << endl;
    else
    {
        bool x = false;
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            if (ans[i] != 0 || x)
            {
                cout << ans[i];
                x = true;
            }
        }
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