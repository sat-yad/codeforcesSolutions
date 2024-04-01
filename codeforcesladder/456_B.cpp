#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  string s;cin>>s;
//   cout<<s.length();
  int len = s.length() - 2;
  if (len < 0) len=0;
  int v = stoi(s.substr(len)) % 4;
  int arr1[4]={1,2,4,3},arr2[4]={1,3,4,2},arr3[4]={1,4,1,4};
  int ans=(1+arr1[v]+arr2[v]+arr3[v])%5;
  cout<<ans;nl;
}
int main(){
    fast;
 solve();
}
