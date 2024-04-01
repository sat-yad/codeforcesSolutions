#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll n;cin>>n;
   ll arr[n];fl(0,n) cin>>arr[i];
   ll i=0,j=n-1,s2=0,s1=0;
   while(i<=j){
       if(s1<=s2) s1+=arr[i++];
       else s2+=arr[j--];
   }
   cout<<i<<" "<<n-i;nl;
}
int main(){
    fast;
 solve();
}
