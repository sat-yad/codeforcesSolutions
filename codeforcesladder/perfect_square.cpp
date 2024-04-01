#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
//  ll perfect(ll n){
//     if(for())
//  }
void solve() {
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
      float N=sqrt(arr[i]);
      int N1=sqrt(arr[i]);

        if(N-N1!=0){
         cout<<arr[i];
         return;
        }
    }
}
int main(){
    fast;
 solve();
}
// 8
// 1 2 4 8 16 32 64 576
