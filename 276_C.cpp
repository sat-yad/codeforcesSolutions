#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
#define N 200010
ll b[N];
void solve() {
  ll n,q,l,r;cin>>n>>q;
  int a[n+1];
  fl(1,n+1) cin>>a[i];
  fl(0,q){cin>>l>>r;b[l]++;b[r+1]--;}
  fl(1,N) b[i]+=b[i-1];
  sort(a+1,a+n+1),sort(b+1,b+n+1);
  ll ans=0;
  fl(1,n+1) ans+=(ll)(a[i]*b[i]);
  cout<<ans;
}
int main(){
    fast;
 solve();
}
