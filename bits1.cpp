#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n;cin>>n;ll a[n];fl(0,n) cin>>a[i];ll nd=a[0];
 fl(1,n){nd=nd& a[i];} cout<<nd;nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}