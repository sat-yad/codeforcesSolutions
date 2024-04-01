#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll a,b,c,n;
  cin>>a>>b>>c>>n;
  ll maxm=max(a,b);
  ll d=max(maxm,c);
  ll vl=3*d-a-b-c;
  n-=vl;

if(n>=0){

if(n%3==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
else{
    cout<<"NO"<<endl;
}
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}
