#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,k,c1=0,c2=0;cin>>n>>k; vector<string> arr;
  string cpass,a;
  fl(0,n){cin>>a;arr.push_back(a);}
  cin>>cpass;ll len=cpass.size();
  fl(0,n){ if(arr[i].size()<len) c1++;
  if(arr[i].size()==len) c2++;}
  ll best=c1+(c1/k)*5+1;
  ll worst=c2+c1+((c2+c1-1)/k)*5;
  cout<<best<<" "<<worst;nl;
}
int main(){
    fast;
 solve();
}
