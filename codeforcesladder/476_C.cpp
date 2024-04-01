#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
#define N 1000000007
void solve() {
  ll a,b;cin>>a>>b;
  ll m=((b*b-b)/2)%N;
  ll k=((a*a+a)/2)%N;
  cout<<(((((k%N)*b)%N)+a)%N*m)%N;nl;
}
int main(){
    fast;
 solve();
}
