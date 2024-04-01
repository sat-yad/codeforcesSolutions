#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif

void solve() {
    double  pi=3.14159265359;
    cout<<setprecision(13);
  int d,h,v,e;cin>>d>>h>>v>>e;
  double vo=pi*d*d/(4.0)*e;
  if(v<=vo){cout<<"NO";nl;return;}
  else{
    cout<<"YES";nl;
    cout<<pi*d*d*h/(4.0)/(v-vo);nl;}
}
int main(){
    fast;
 solve();
}
