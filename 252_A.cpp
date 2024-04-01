#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n,mx=INT_MIN;cin>>n;int a[n];
  fl(0,n) cin>>a[i];
  fl(0,n){
    int x=a[i];
    mx=max(mx,x);
    for(int j=i+1;j<n;j++){
      x=x^a[j];
      mx=max(mx,x);
    }
  }
  cout<<mx;  
}
int main(){
    fast;
 solve();
}
