#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n;cin>>n;
  vector<int> box,b;
//   int k=n/2;
  int m=n*n;
//   for(int i=1;i<=n*n;i++){ box.push_back(i);}
  for(int i=1;i<=m/2;i++){
       b.push_back(i);
       b.push_back(m+1-i);
  }
  int k=0;
//   for(int i=0;i<b.size();i++){cout<<b[i]<<" ";}nl;
for(int j=0;j<n;j++){
  for(int i=0;i<n;i++){
    cout<<b[k]<<" ";
    k++;
  }
  nl;
}

}
int main(){
    fast;
 solve();
}
