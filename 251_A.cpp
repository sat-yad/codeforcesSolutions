#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,d,ans=0,j=0;cin>>n>>d;
  ll a[n];fl(0,n) cin>>a[i];
  fl(0,n){
    while(abs(a[i]-a[j])>d) j++;
    ans+=(ll)(i-j)*(i-j-1)/2;
  }
  cout<<ans<<"\n";
}
int main(){
    fast;
 solve();
}
