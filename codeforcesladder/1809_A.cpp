#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  string s;cin>>s;
  sort(s.begin(), s.end());
  if (s[0] == s[3])cout << -1;
  else if (s[0] == s[2] || s[1] == s[3]) cout << 6;
  else cout << 4;
  nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}