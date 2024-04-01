#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int n;cin>>n;
 int arr[n],min=INT_MIN,ind=-1;
 fl(0,n){cin>>arr[i];}
//  if(n==1){cout<<0;nl;return;}
 for(int i=n-1;i>0;i--){
         if(arr[i]<arr[i-1]){cout<<i;nl;return;}
 }
 cout<<0;nl;
}
int main(){
    fast;
 solve();
}
