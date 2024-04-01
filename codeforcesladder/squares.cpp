#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll n,k;
   cin>>n>>k;
   ll arr[n];
   for(ll i=0;i<n;i++){
    cin>>arr[i];
   }
   sort(arr,arr+n,greater<int>());
//    reverse(arr,arr+n);

   if(n<k){
    cout<<-1<<endl;
    return;
   }
    cout<<arr[k-1]<<" "<<0<<endl;
}
int main(){
    fast;
 solve();
}
