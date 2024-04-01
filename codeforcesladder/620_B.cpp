#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll a,b,sum=0;cin>>a>>b;
    unordered_map<ll,ll>mp;
    mp.insert({0,6});
    mp.insert({1,2});
    mp.insert({2,5});
    mp.insert({3,5});
    mp.insert({4,4});
    mp.insert({5,5});
    mp.insert({6,6});
    mp.insert({7,3});
    mp.insert({8,7});
    mp.insert({9,6});
    for(ll i=a;i<=b;i++){
        ll c=i;
    while(c){
        ll value=mp[c%10];
        sum+=value;
        c/=10;
    }
    }
    cout<<sum<<endl;
}
int main(){
    fast;
 solve();
}
