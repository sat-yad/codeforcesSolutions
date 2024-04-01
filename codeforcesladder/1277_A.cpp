#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll n,cnt=0;cin>>n;
    for(ll i=1;i<=9;i++){
        ll a=0;
        while(1){
            a=a*10+i;
            if(a<=n) cnt++; else break;
        }
    }
    cout<<cnt<<endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}