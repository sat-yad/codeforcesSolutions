#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n,a,cnt=0,c=0;cin>>n;
    unordered_map<int,int> mp;
    fl(0,n){cin>>a;if(a!=0) mp[abs(a)]++; else c++;}
    // for(auto i:mp){cout<<i.first<<" "<<i.second;nl;}
    for(auto i:mp) { if(i.second==1) cnt++;else  cnt+=2; }
    // int cnt=mp.size();
    if(c) cout<<cnt+1; else cout<<cnt;
    nl;
   
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}