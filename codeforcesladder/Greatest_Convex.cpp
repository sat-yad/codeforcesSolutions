#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
ll factorial(ll x){
   if(x==0 || x==1){
    return 1;
   }
   return x*factorial(x-1);
}
void solve() {
    ll k;
    cin>>k;
    cout<<k-1<<endl;
   
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}