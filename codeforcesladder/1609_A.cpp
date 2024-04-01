#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,cnt=0,sum=0;cin>>n;ll arr[n];
  fl(0,n){cin>>arr[i];}
  fl(0,n){if(arr[i]%2==0){while(arr[i]%2==0){cnt++;arr[i]/=2;}}}
  sort(arr,arr+n);
  fl(0,n-1){sum+=arr[i];}
  cout<<sum+(ll)(arr[n-1]*pow(2,cnt));nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}