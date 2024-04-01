#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n;cin>>n; ll arr[n],sum=0;
 fl(0,n) cin>>arr[i];
 sum+=arr[0];
 fl(1,n)
 {
     ll k = arr[i] - 1 ;
     if(arr[i] > 1) 
     sum = sum + k*i+k+1;
     else sum += arr[i];
 }
 cout<<sum;nl;
}
int main(){
    fast;
 solve();
}
