#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n;cin>>n;
  if(n==0 ){cout<<0;return;}
  if(n<0) n=-n;
  ll sum=0,ans=0,i;
  for(i=1;sum<n;i++){
     sum+=i;ans++;
  }
  ll d=sum-n;
  if(d%2==0) cout<<ans;
  else if((d+i)%2==0) cout<<ans+1;
  else cout<<ans+2; 
}
int main(){
    fast;
 solve();
}
