#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n;cin>>n;
    vector<vector<int>>v(n+1);
    fl(0,n){int a,b;cin>>a>>b;v[a].push_back(b); 
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        int j=0,x=i;
        sort(v[i].rbegin(),v[i].rend());
        while(j<v[i].size() && x--){
            ans+=v[i][j];j++;
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