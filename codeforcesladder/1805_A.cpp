#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int n;cin>>n;int arr[n];
 fl(0,n) cin>>arr[i];
 int x=arr[0];
 for(int i=1;i<n;i++){
    x=(x^arr[i]);
 }
 if(n%2) cout<<x;
 else if(x==0) cout<<0;
 else cout<<-1;
 nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}