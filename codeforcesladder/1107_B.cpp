#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll k,cnt=0,x;cin>>k>>x;
   vector<ll> c;
   for(ll i=x;;i+=9){
    cnt++;
        //  if(sod(i)==k ){cnt++;}
         if(cnt==k){cout<<i<<endl;return;}
   }
//    for(ll i=0;i<c.size();i++){cout<<i<<"  ";}
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}