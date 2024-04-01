#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n;cin>>n;
  vector<int> c;
  c.push_back(4);c.push_back(7);
  c.push_back(44);c.push_back(47);
  c.push_back(74);c.push_back(77);
  c.push_back(444);c.push_back(447);
  c.push_back(474);c.push_back(477);
  c.push_back(744);c.push_back(747);
  c.push_back(774);c.push_back(777);
  for(int i=0;i<c.size();i++){
    if(n%c[i]==0){cout<<"YES";nl;return;}
  }
  cout<<"NO";nl;
}
int main(){
    fast;
 solve();
}
