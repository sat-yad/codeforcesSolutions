#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,l,cnt=-1,temp=1;
  cin>>n>>l;
  while(temp<l){
    temp*=n;
    cnt++;
  }
  if(temp==l){  cout<<"YES";nl;cout<<cnt;nl;}
  else{cout<<"NO";nl;}
}
int main(){
    fast;
 solve();
}
