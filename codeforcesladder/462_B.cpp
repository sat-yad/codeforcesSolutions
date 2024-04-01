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
    ll n, k, sum = 0;
    cin >> n >> k;
    string str;
    cin >> str;
    ll cnt[27] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        cnt[str[i] - 'A']++;
    }
    sort(cnt, cnt + 26);
    for (int i = 25; i >= 0; i--)
    {
        if (cnt[i] > k)
        {
            sum += k * k;
            k = 0;
        }
        if(k==0){
            break;
        }
        else
        {
            sum += cnt[i] * cnt[i];
            k -= cnt[i];
        }
    }
    cout << sum << endl;
}
int main()
{
    fast;
    solve();
}
