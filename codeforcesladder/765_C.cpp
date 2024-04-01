#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll k,a,b;cin>>k>>a>>b;
 if((b%k && a/k==0)||(a%k && b/k==0)) cout<<-1;
 else cout<<a/k+b/k;
}
int main(){
    fast;
 solve();
}
// 1000000000 0 1