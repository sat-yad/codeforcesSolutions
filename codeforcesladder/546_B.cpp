#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
ll numstat[1000001];
void solve() {
ll n,ans=0;cin>>n;ll arr[n];
fl(0,n){cin>>arr[i];numstat[arr[i]]=1;}
sort(arr,arr+n);
for(ll i=1;i<n;i++){
    ll cur=arr[i];
    if(arr[i-1]==cur){
        while(numstat[cur]==1){cur++;ans++;}
        numstat[cur]=1;
    }
}
cout<<ans<<endl;
}
int main(){
    fast;
 solve();
}
