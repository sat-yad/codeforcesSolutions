#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
     ll n;
     cin>>n;
     string str;
     cin>>str;
     ll ans=0;
     for(ll i=0;i<n;i++){
        if((str[i]-'0')%2==0){
            ans+=i+1;
        }
     }
      cout<<ans;
}
int main(){
    fast;
 solve();
}
