#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll n,sum;cin>>n;
   ll arr[n],brr[n-1];
   cin>>arr[0];
   sum=arr[0];
   fl(1,n){cin>>arr[i];
   if(sum>arr[i]){sum=arr[i];}}
//    sort(brr,brr+n-1);
//    for(int i=0;i<n-1;i++){
//     cout<<brr[i]<<" ";
//    }
   if(arr[0]>sum){cout<<"Alice";nl;}
   else{cout<<"Bob";nl;}
  

}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}