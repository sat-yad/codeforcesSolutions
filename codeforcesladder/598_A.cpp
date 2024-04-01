#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,cnt=0;cin>>n;
  ll c=n;
  while(c){ cnt++; c/=2;}
//   cout<<cnt;nl;
ll sum=(ll)n*(n+1)/2;
ll tum=pow(2,cnt+1)-2;
cout<<sum-tum;nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}