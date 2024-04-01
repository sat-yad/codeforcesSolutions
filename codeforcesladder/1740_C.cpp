#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n,ans=0;cin>>n;ll arr[n];fl(0,n) cin>>arr[i];
 sort(arr,arr+n);
    for(int i=n-2;i>=1;i--) ans=max(ans,arr[n-1]+arr[i]-2*arr[i-1]);
    for (int i=2;i<n;i++) ans=max(ans,2*arr[i]-arr[i-1]-arr[0]);
    cout<<ans;nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}