#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll a,b,c,d;cin>>a>>b>>c>>d;
 ll z=d-b;
 if(d>=b && (c-d)<=(a-b)) cout<<z+(a+z)-c;
 else cout<<-1;
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