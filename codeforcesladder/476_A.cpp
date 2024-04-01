#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n,m,z,ans=0,flag=0;cin>>n>>m;
  z=n/2;
  ans=z;

if(n%2!=0){ans+=1;};
// cout << z << " " << ans;
// nl;
if (ans % m == 0)
{
    cout << ans;
    nl;}
 else{
    while(z){
        ans+=1;
        if(ans%m==0){flag=1;break;}
        z--;
    }
    if(flag){
    cout<<ans;nl;}else{cout<<-1;nl;}
 }
}
int main(){
    fast;
 solve();
}
