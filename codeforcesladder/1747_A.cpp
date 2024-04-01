#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n,sum1=0,sum2=0;cin>>n;
 ll arr[n];fl(0,n){cin>>arr[i]; if(arr[i]<=0) sum1+=arr[i];
 else sum2+=arr[i];}cout<<abs(abs(sum1)-sum2);nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}