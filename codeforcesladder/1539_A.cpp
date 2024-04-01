#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
ll n,x,t;cin>>n>>x>>t;
ll r=min(t/x,n-1);
cout<<r*(r-1)/2+(n-r)*r<<endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}