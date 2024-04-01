#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll n,k,x,rem;cin>>n>>k;
   for(int i=k-1;i>0;i--){
    if(n%i==0){cout<<n/i*k+i;nl;return;}
   }
}
int main(){
    fast;
 solve();
}
