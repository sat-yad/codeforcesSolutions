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
    int n, ans = 0, an = 0;cin >> n;
    string s;cin >> s;
    unordered_map<char ,int > mp,mp1;
    // unordered_set<char> set;
    int k = s.size();
    // int f[256];
    // fl(0, 256) f[i]=0;
    //    fl(0,k) mp[s[i]]++;
    //    for(auto i:mp){if(i.second >=2) ans++; else an++;}
    fl(0,k) mp[s[i]]++;
       ans = mp.size();
       cout<<ans;nl;
       for (int i = n - 1; i >= 0; i--){ mp[s[i]]--;
           if (mp[s[i]] == 0) mp.erase(s[i]);
           mp1[s[i]]++;
           int an=mp.size()+mp1.size();
           ans =max(ans, an);
       }
       cout<<ans;
       // fl(0, k)
       // {
       //     // cout<<f[s[i]];nl;
       //     if (f[s[i]] >= 1)
       //     {
       //         ans = i;
       //         break;
       //     }
       //     f[s[i]]++;
       // }
       // fl(ans, n) set.insert(s[i]);
       // cout << ans + set.size();
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