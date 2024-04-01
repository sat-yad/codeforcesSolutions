#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  string s;cin>>s;int n=s.length();
  vector<vector<int>> v(10);vector<int> a(10,0);
  fl(0,n) {int d=s[i]-'0'; v[d].push_back(i);}
  int m,cnt=0;cin>>m;string l,r;cin>>l>>r;
  fl(0,m){
    for(int j=0;j<10;j++){
      while(a[j]<v[j].size() && v[j][a[j]]<cnt) a[j]++;
    }
  int ans=cnt;
  for(int j=l[i]-'0';j<=r[i]-'0';j++){
    if(a[j]>=v[j].size()) ans=n;
    else ans=max(ans,v[j][a[j]]);
  }
  cnt=ans+1;
  }
  if(cnt>=n+1) cout<<"YES" ;else cout<<"NO";
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