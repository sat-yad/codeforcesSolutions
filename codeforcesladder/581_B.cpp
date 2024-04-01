#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n;cin>>n; ll arr[n],brr[n],maxm;
 fl(0,n){ cin >>arr[i];/*if(maxm<arr[i]) maxm=arr[i];*/}
//  cout<<maxm;nl;
maxm=arr[n-1];
brr[n-1]=0;
 for(int i=n-2;i>=0;i--){
     int j = maxm + 1 - arr[i];
       brr[i]=max(0,j);
       if(maxm<arr[i]) maxm=arr[i];
 }
 fl(0,n){cout<<brr[i]<<" ";}
 nl;
}
int main(){
    fast;
 solve();
}
