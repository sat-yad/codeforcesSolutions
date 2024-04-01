#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   int x1,y1,x2,y2,x3,y3,ans=1;cin>>x1>>y1;cin>>x2>>y2;cin>>x3>>y3;
   if((x2<x1 && x3<x1) || (x2>x1 && x3>x1)) ans+=min(abs(x2-x1),abs(x3-x1));
   if((y2<y1 && y3<y1) || (y2>y1 && y3>y1)) ans+=min(abs(y2-y1),abs(y3-y1));cout<<ans;nl;

}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}