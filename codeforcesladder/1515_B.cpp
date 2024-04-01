#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll n;cin>>n;
    if(n%2==1){cout<<"NO";nl;return;}
    ll x=sqrt(n);
    ll y=n/2;
    ll z=sqrt(y);
    if(x*x==n){cout<<"YES";nl;}
    else if(z*z==y){cout<<"YES";nl;}
    else{cout<<"NO";nl;}
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}