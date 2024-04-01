#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
struct sy{
  ll l,r,d;
};
void solve() {
 ll n,m,k;cin>>n>>m>>k;
 vector<ll> v(n+2,0),b(m+2,0),c(n+2,0);
 fl(1,n+1){cin>>v[i];}
 vector<sy> vec;
 for(int i=0;i<m;i++){
    int l,r,d;cin>>l>>r>>d;
    vec.push_back({l,r,d});
 }
  int x,y;
  while(k--){
    cin>>x>>y;
    b[x]+=1;b[y+1]-=1;
  }
  for(int i=1;i<=m;i++){
  b[i]+=b[i-1];}
  // for(int i=1;i<=n;i++) cout<<b[i]<<" ";
  // nl;
  int j=1;
  for(sy i:vec){
      c[i.l]+=(i.d*b[j]);
      c[i.r+1]-=(i.d*b[j]);j++;
  }
  for(int i=1;i<=n;i++){
  c[i]+=c[i-1]; v[i]+=c[i];}
  for(int i=1;i<=n;i++) cout<<v[i]<<" ";
}
int main(){
    fast;
 solve();
}
