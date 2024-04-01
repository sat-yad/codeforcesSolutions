#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>=a ) cout<<b;
    else if(a>b && c>d){
        ll s = (ll)ceil((double)(a - b) / (c - d));
        // cout << (a - b) / (c - d);nl;
        // cout << s;
        // nl;
        cout<<b+c*s;
    }
    else  cout<<-1;
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
// 39,00,123
// 2,15,006