#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll n,k,g,cnt=1;cin>>n>>k;
   ll arr[n];
   for(int i=1;i<=n;i++){
        cin>>g;
        arr[g]=i;
   }
   for(int i=2;i<=n;i++){
    if(arr[i]>arr[i-1]){
        cnt++;
    }else{break;}
   }
   cout<<(n-cnt-1+k)/k;nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}