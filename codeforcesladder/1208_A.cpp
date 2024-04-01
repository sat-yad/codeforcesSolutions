#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif

void solve() {
ll a,b,n;cin>>a>>b>>n;
ll f[3];
f[0]=a,f[1]=b;f[2]=a ^ b;
cout<<f[n%3];nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}