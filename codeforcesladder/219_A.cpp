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
    int k;
    cin >> k;
    string s;
    cin >> s;
    // cout<<s.size();
    // sort(s.begin(),s.end()+s.size());
    if ((s.size()) % k != 0)
    {
        cout << -1;
        nl;
        return;
    }
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    // mp.max_size();
    if (s.size() == 1)
    {
        cout << s;
        nl;
        return;
    }
    // else
    // {
    //     for (auto i : mp)
    //     {
    //         if ((i.second) % k != 0)
    //         {
    //             cout << -1;
    //             nl;
    //             return;
    //         }
    //     }
    // }
    // for (int i = 0;k; i++)
    // {
    //     for (auto j : mp)
    //     {
    //         cout << j.first;
    //         j.second--;
    //     }
    // }
    string ans;
          for(auto &i:mp)
            {
                if((i.second)%k==0){
                    for(ll j=0;j<i.second/k;j++){
                        ans+=i.first;
                    }
                }else{
                    cout<<-1;
                    nl;
                    return;
                }
 
            }
            for(ll i=0;i<k;i++){
                cout<<ans;
            }
    }

int main()
{
    fast;
    solve();
}
