#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n;cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }
    map<int,int>m;
    for(auto i:mp){
        m[i.second]=i.first;
    }
    for(auto i:mp){cout<<i.first<<":"<<i.second;nl;}
    for(auto i:m){cout<<i.first<<":"<<i.second;nl;}
    for(auto i:m){
        for(int j=0;j<i.first;j++){
            cout<<i.second<<" ";
        }
    }
    nl;
}
int main(){
    fast;
    int t;cin>>t;
    while(t--){
 solve();
    }
}

