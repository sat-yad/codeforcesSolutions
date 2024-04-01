#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n,m,c;cin>>n>>m>>c;
  int a[n],b[m],k=n-m+1;
  fl(0,n) cin>>a[i];fl(0,m) cin>>b[i];
  vector<int>pr(n+1,0);fl(0,m){pr[i]+=b[i];pr[k+i]-=b[i];}
  fl(1,n+1) pr[i]+=pr[i-1];fl(0,n) a[i]+=pr[i];
  fl(0,n) cout<<a[i]%c<<" ";
}
int main(){
    fast;
 solve();
}

