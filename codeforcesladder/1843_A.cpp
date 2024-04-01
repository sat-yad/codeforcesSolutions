#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n,sum=0;cin>>n;
int arr[n];fl(0,n) cin>>arr[i];
if(n<=1){cout<<0<<endl;return;}
sort(arr,arr+n);
for(int i=0;i<n/2;i++){
    sum=sum+abs(arr[i]-arr[n-i-1]);
}
cout<<sum<<endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}