#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n,s1=0,s2=0;cin>>n;
 ll c=n;
 while(n>=10){
      int d=n%10;
      int d1=n/10;
      c+=d1;
      n=d+d1;
 }
//  cout<<s1<<" "<<s2;nl;
 cout<<c;nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}   
}