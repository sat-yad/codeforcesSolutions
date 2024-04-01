#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
vector<ll> lucky;
void glucky(const long long num){if (num > (ll)(1e10))return;
lucky.push_back(num);glucky(num * 10 + 4);glucky(num * 10 + 7);
}
void solve() {
   glucky(4);glucky(7);
   ll l,r;cin>>l>>r;
   sort(lucky.begin(),lucky.end());
   ll a=l,ind=lower_bound(lucky.begin(),lucky.end(),l)-lucky.begin();
//    cout<<ind;nl;
   ll ans=0;
   while(true){
    ll j=lucky[ind]; ans+=(min(j,r)-a+1)*j;
    if(j>=r) break;
    a=j+1;ind++;
   }
   cout<<ans;nl;
}
int main(){
    fast;
 solve();
}
