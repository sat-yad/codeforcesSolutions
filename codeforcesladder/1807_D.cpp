#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll n,q;cin>>n>>q;
    ll a[n],p[n];
    fl(0,n) cin>>a[i];
    p[0]=a[0];
    fl(1,n) p[i]=a[i]+p[i-1];
    fl(0,q){
        ll l,r,k,z;cin>>l>>r>>k;
        // z=(r-1<n)?(p[r-1]-p[l-2]):p[r-1];
        if(r-1<n && l-2>=0) z=p[r-1]-p[l-2];
        else if(r-1<n && l-2<0) z=p[r-1];
        else z=-p[l-2];
        if((p[n-1]-z+(r-l+1)*k)%2) cout<<"YES";
        else cout<<"NO";
        nl;
    }

}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}