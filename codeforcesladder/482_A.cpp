#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll n,k;cin>>n>>k;ll a=1,b=n,arr[n];
    for(ll i=0;i<n;i+=2) arr[i]=a++;
    for(ll i=1;i<n;i+=2) arr[i]=b--;
    fl(0,n) cout<<arr[i]<<" ";
}
int main(){
    fast;
 solve(); 
}
