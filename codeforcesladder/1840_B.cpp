#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
ll n,k;cin>>n>>k;
ll x=pow(2,k);
if(k>30){cout<<n+1;}
else{cout<<min(x,n+1);}
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