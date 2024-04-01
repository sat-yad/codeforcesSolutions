// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fl(w,x) for(ll i=w;i<x;i++)
// #define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
// #define nl cout<<"\n";
// #define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
// void solve() {
//   ll n;
//   cin>>n;
//   int arr[n],brr[n];
//   for(int i=0;i<n;i++){
//       cin>>arr[i]>>brr[i];
//   }
//   for(int i=0;i<n;i++){
//      ll cnt=0;
//      ll a=max(arr[i],brr[i]);
//      ll b=min(arr[i],brr[i]);
//     while( a>=0 || b>=0){
//         if(a==0 || b==0){
//             break;
//         }
//           cnt++;   
//           a-=b;
//           int c=max(a,b);
//           int d=min(a,b); 
//           a=c;
//           b=d; 
//         //   cout<<a<<" "<<b<<endl;
//     }
//    cout<<cnt<<endl;
// }
// }
// int main(){
//     fast;
//  solve();
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll arr[2];
   cin>>arr[0]>>arr[1];
   int cnt=0;
   while(arr[0]>0 && arr[1]>>0){
        sort(arr,arr+2);
       cnt+=arr[1]/arr[0];
       arr[1]-= (arr[1]/arr[0])*arr[0];
   }
    cout<<cnt<<endl;
   
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}
