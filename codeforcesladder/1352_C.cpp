#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll n,k;cin>>n>>k;
   int rem=k%(n-1);
   int q=k/(n-1);
   if(rem==0){cout<<q*n-1;nl;}
   else{
    cout<<q*n+rem;nl;
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