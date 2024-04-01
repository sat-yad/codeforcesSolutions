#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll n,cnt=0;cin>>n;
    ll v[n];
    fl(0,n) cin>>v[i];
    fl(0,n-1){
        if(v[i+1]-v[i]>3) cnt++;
    }
    if(cnt>=1){cout<<"NO"<<endl;return;}
    else if(v[n-1]-v[0]<=n+1){cout<<"YES";nl;return;}
    else cout<<"NO"<<endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}