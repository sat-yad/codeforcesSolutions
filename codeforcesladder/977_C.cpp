#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n,k;cin>>n>>k;
 ll arr[n];
 fl(0,n) cin>>arr[i];
 sort(arr,arr+n);
 if(k==0 && arr[0]<=1) cout<<-1;
 else if(k==0 && arr[0]>1) cout<<1;
 else if(arr[k-1]==arr[k] ) cout<<-1;
 else cout<<arr[k-1];
}
int main(){
    fast;
 solve();
}
