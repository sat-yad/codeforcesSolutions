#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int arr[3];
 for(int i=0;i<3;i++){
    cin>>arr[i];
 }
 sort(arr,arr+3);
 cout<<arr[1]<<endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}