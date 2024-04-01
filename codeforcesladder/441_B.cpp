#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll n,v;cin>>n>>v;
   ll arr[n][2];
   for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
        cin>>arr[i][j];
    }
   }
   sort(arr,arr+n);
   ll j=arr[n][0]; ll k=(v+1)/2;
   arr[0][1] -= min(arr[0][1], v);
    fl(1, j + 1) { arr[i-1][1] -= min(arr[i-1][1] , k);
    arr[i][1]-= min(v-k ,arr[i][1]) ;}
}
int main(){
    fast;
 solve();
}
