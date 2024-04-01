#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n,cnt=0;cin>>n;
 ll arr[n];
//  unordered_map<ll,ll>mp;
 for(int i=0;i<n;i++){
    cin>>arr[i];
     if(arr[i]==1){cnt++;}
 }

 ll k=(cnt+1)/2;
 cout<<k+n-cnt;nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}
// 3N
// 1 2 1 2
// 3
// 2 4 2
// 5
// 1 2 3 4 5
