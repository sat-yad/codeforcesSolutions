#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
// reverse(arr,arr+n);
for(int i=1;i<=n/2 ;i++){
cout<<arr[i]<<" "<<arr[0];nl;
}
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}
// char solve(){
//     string a, b; int a1, b1;
//     cin>>a>>a1>>b>>b1;
//     if(a.size()+a1>b.size()+b1) return '>';
//     if(a.size()+a1<b.size()+b1) return '<';
//     while(a.size()<b.size()) a+='0';
//     while(b.size()<a.size()) b+='0';
//     if(a>b) return '>';
//     if(a<b) return '<';
//     return '=';
// }