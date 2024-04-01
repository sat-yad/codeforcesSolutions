#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n,p=0,a,b;cin>>n;
  vector<pair<int ,int >> v;
  for(int i=0;i<n;i++){cin>>a>>b; v.push_back(make_pair(a,b));}
  sort(v.begin(),v.end());
  for(int i=1;i<n;i++){
    if(v[i].first>v[i-1].first && v[i].second<v[i-1].second){p=1; break;}
  }
  if(p) cout << "Happy Alex"; else cout << "Poor Alex";
}
int main(){
    fast;
 solve();
}
