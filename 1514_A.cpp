#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n,flag=0;cin>>n;
  int v[n];
  fl(0,n) cin>>v[i];
  fl(0,n){
    if(ceil((double)sqrt(v[i]))!=floor((double)sqrt(v[i]))){flag=1;break;}
  }
  if(flag==0) cout<<"NO"; else cout<<"YES";nl;
} 
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}