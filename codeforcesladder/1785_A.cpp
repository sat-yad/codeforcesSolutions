#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n;cin>>n;
    vector<int>a(n);
    fl(0,n) cin>>a[i];
    sort(a.begin(),a.end());
    ll last_val=1,ans=0;
    for(auto &i:a){
        if(i<last_val) continue;
        ans+=i-last_val;
        last_val++;
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
