#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n,t;cin>>n>>t;
    int v1[n],v2[n];
    fl(0,n) cin>>v1[i];fl(0,n) cin>>v2[i];
    int ans=-1;
    fl(0,n){
        if(i+v1[i]<=t){
            if(ans==-1 || v2[i]>v2[ans-1]) ans=i+1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}