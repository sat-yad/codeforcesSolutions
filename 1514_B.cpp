#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
#define M 1000000007
void solve() {
  int n,k;cin>>n>>k;ll pr=n;
  for(int i=1;i<k;i++){
      pr=(ll)((pr%M) * n)%M;
  }
  cout<<pr;nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}