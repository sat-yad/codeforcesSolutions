#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int n,cnt=1;cin>>n;
 int arr[n];
 fl(0,n) cin>>arr[i];
 sort(arr,arr+n);
 fl(1,n){
    if(arr[i-1]!=arr[i]) cnt++;
 }
 fl(1,cnt+1) cout<<cnt<<" ";
 fl(cnt+1,n+1) cout<<i<<" ";
 nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}