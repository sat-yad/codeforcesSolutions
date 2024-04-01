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
    int n,a;
    cin >> n;
    vector<pair<int,int>> vp;
    fl(0, n)
    {
        cin>>a;
        vp.push_back({a,i+1});
    }
    sort(vp.begin(),vp.end());
    // for(int i=0;i<n;i++){
    //     cout<<vp[i].first<<" "<<vp[i].second;nl;
    // }
    // cout<<"-------------------";nl;
    for(int i=0;i<n/2;i++){
        cout<<vp[i].second<<" "<<vp[n-i-1].second;nl;
    }
}
int main()
{
    fast;
    solve();
}
