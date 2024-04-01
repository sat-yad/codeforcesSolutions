#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n;cin>>n;
  ll arr[n], cnt0 = 0, cntg2 = 0;
  fl(0,n){cin>>arr[i]; if(arr[i]==0) cnt0++; if(arr[i]>=2) cntg2++;}
  if(cnt0<=(n+1)/2) cout<<0;
  else if(cntg2>0 || cnt0==n) cout<<1;
  else cout<<2;
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