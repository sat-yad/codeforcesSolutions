#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int a,b;cin>>a>>b;
  if(a==9 && b==1){cout<<9<<" "<<10;nl;}
  else if(a==b){cout<<10*a<<" "<<10*a+1;nl}
  else if(b==a+1){cout<<10*a+9<<" "<<10*(a+1);nl;}
  else cout<<-1;nl;
}
int main(){
    fast;
 solve();
}
