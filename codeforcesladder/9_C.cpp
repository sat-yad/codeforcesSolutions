#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif

void solve() {
   ll n,cnt=1,ans=0;cin>>n;
   while(n){
     if(n%10 > 1){ans=(cnt*2)-1;}
     else{ans+=(n%10 == 1)?cnt:0;}
     cnt*=2;
     n/=10;
}
     cout<<ans;nl;
}
int main(){
    fast;
 solve();
}
