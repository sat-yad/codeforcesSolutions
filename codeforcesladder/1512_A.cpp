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
fl(0,n){
    if(count(arr,arr+n,arr[i])==1){cout<<i+1<<endl;}
}
}
int main(){
    fast;  
    int t;cin>>t;
    while(t--){
 solve();}
}
