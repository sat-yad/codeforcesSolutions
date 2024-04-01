#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
ll n,g,b;cin>>n>>g>>b;
//    if((n+1)/2<=g){cout<<n;nl;}
//    else{
//        ll x = (n + 1) / 2 / g + ((n + 1) / 2 - 1) * b;
//     //    cout << x;
//     //    nl;
//           if(n<=x){cout<<x;nl;}
//          else{cout<<n;nl;} 
//    }
ll ans = ((n + 1) / 2) / g;
ll rem = ((n + 1) / 2) % g;
if (rem){cout << max(n, ans * (g + b) + rem) ;nl;}
else{cout << max(n, ans * (g + b) - b) ;nl;}
}

int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}