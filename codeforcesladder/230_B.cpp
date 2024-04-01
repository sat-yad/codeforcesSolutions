#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
// ll prime_count(ll y){
    
//     return ans;
// }
void solve() {
    ll n,x;cin>>n;
    vector<bool>vec(1000001,true);
    vec[0] = vec[1] = false;
    for (ll i = 2; i * i < 1000001; i++)
        if (vec[i])
            for (ll j = i * i; j < 1000001; j += i)
                vec[j] = false;
    while(n--){
        ll x;cin>>x;
        ll y=sqrt(x);
        if(y*y==x && vec[y]) cout<<"YES";
        else cout<<"NO";
        nl;
    }
}
int main(){
    fast;
 solve();
}
