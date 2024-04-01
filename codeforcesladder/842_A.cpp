#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
ll l,r,x,y,k;cin>>l>>r>>x>>y>>k;
// ll min=(l-1-(l-1)%k)/k+1,max=(r-r%k)/k;
// if(max<x || min>y) cout<<"NO";
// else cout<<"YES";
bool flag=false;
for(int i=x;i<=y;i++){
    if(i*k>=l && i*k<=r){flag =true;}
}
if(flag ) cout<<"YES";
else cout<<"NO";
nl
}
int main(){
    fast;
 solve();
}