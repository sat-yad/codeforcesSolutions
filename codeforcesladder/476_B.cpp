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
template <typename T = long long int>
T nCr(T n, T k)
{
    if (k > n / 2)
    {
        k = n - k;
    }
    T ans = 1;
    for (T i = 0; i < k; ++i)
    {
        ans = (ans * (n - i)) / (i + 1);
    }
    return ans;
}
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0, cnt2 = 0, cnt1 = 0;
    double ans;
    fl(0, s1.size())
    {
        if (s1[i] == '+')
            cnt++;
        else
            cnt--;
    }
    fl(0, s2.size())
    {
        if (s2[i] == '?')
            cnt2++;
        else if (s2[i] == '+')
            cnt1++;
        else cnt1--;
    }
    if ((cnt2 + cnt - cnt2) % 2 || (cnt2 + cnt - cnt2) / 2 < 0 || (cnt2 - cnt + cnt2)/2<0)
    {
        ans = 0;
        cout << fixed << setprecision(10) << ans;
    }
    // else if (cnt2 + cnt1 < cnt)
    // {
    //     ans = 0;
    //     cout << fixed << setprecision(10) << ans;
    // }
    // else
    else {
        int cnt3 = (cnt2 + cnt - cnt2)/2;
         int x = nCr((int)cnt2, (int)(cnt - cnt1));
        // cout<<x;nl;
        cout<< fixed << setprecision(13) <<x / pow(2, cnt2);
    }
    // else
    // {
    //     ans = 1;
    //     cout << fixed << setprecision(13) << ans;
    // }
    nl;
}
int main()
{
    fast;
    solve();
}

