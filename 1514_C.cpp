#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
ll gcd(ll a,ll b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve() {
  int n;cin>>n;
  ll pro=1;vector<ll> d;
   for (int i=1;i<n;++i) {
    if (gcd(n,i)==1) {
      d.push_back(i);
      pro= (pro*i+n)%n;
    }
  }
  if(pro!=1) d.pop_back();
  cout<<d.size();nl;
  for(auto i:d) {
    cout<<i<<" ";
  }
}
int main(){
    fast;
   solve();
}