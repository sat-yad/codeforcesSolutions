#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll a,b,c;cin>>a>>b>>c;
  if(c==0){if(a==b) cout<<"YES"; else cout<<"NO";nl;return;}
  if (c >= 0 && (b - a) >= 0 && (b - a) % c == 0) cout<<"YES";
  else if (c < 0 && (b - a) <= 0 & (a - b) % c == 0) cout<<"YES";
  else cout<<"NO";
  nl;
}
int main(){
    fast;
 solve();
}
