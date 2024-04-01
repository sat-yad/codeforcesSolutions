#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll  n; cin>>n;
  ll arr[n];
  fl(0,n){cin>>arr[i];}sort(arr,arr+n);
  ll k=(n+1)/2,x=0,y=0;;
  for(ll i=n-1;i>=n-k;i--){
       x+=arr[i];}
       fl(0,n-k){y+=arr[i];}
       cout<<x*x+y*y;nl;
}
int main(){
    fast;
 solve();
}
