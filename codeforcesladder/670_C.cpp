#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll n;cin>>n;
   ll arr[n];
   unordered_map<ll,ll>mp;
   fl(0,n){cin>>arr[i];mp[arr[i]]++;}
   ll m;cin>>m;
   ll a[m],s[m];
   fl(0,m){cin>>a[i];}
   fl(0,m){cin>>s[i];}
   ll max=INT_MIN,max_first,index=-1;
   for(auto &i: mp){if(max<i.second){max=i.second;max_first=i.first;}}
   fl(0,m){if(a[i]==max_first){index=i;break;}}
   if(index==-1){
   fl(0,m){if(s[i]==max_first){index=i;break;}}}
   cout<<index+1;nl;

}
int main(){
    fast;
 solve();
}

// 10
// 7 6 1 2 7 3 9 7 7 9
// 10
// 2 9 6 5 9 3 10 3 1 6
// 4 6 7 9 7 4 1 9 2 5