#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
ll sod(ll n){
    ll sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
void solve() {
   ll k,cnt=0;cin>>k;
   vector<ll> c;
   for(int i=19;;i+=9){
         if(sod(i)==10 ){cnt++;}
         if(cnt==k){cout<<i<<endl;return;}
   }
//    for(ll i=0;i<c.size();i++){cout<<i<<"  ";}
}
int main(){
    fast;
 solve();
}
