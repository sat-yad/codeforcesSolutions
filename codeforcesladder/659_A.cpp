#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int n,a,b,ans;cin>>n>>a>>b;
 if(b==0){cout<<a;nl;return;}
 else if(b>0){
     int cnt=0;
    while(cnt<b){
      if(a==n){a=1;cnt+=1; ans=a;
        continue;
      }
        a++;cnt++; ans=a;
      }
 }
 else{
    int cnt=0;
    while(cnt<abs(b)){
      if(a==1){ a=n; cnt+=1; ans=a;
        continue;
      }
        a--; cnt++; ans=a;
      }
 }
 cout<<ans;nl;
}
int main(){
    fast;
 solve();
}
