#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   int n,a,sumeve=0,sumodd=0,cnteve=0,cntodd=0;cin>>n;
   fl(0,n){cin>>a; if(a%2){sumodd+=a; cntodd++;} else{sumeve+=a;cnteve++;}}
   if(sumeve>sumodd) cout<<"YES";else cout<<"NO";nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}