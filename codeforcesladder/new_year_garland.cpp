#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
//     int arr[4];
//   for(int i=0;i<3;i++){
//     cin>>arr[i];
//   }
//   sort(arr,arr+4);
//   if(arr[0]+arr[1]<arr[2]-1){
//     cout<<"No"<<endl;
//   }
//   else{
//     cout<<"YES"<<endl;
//   }
// }
ll x,y,z;
cin>>x>>y>>z;
if((x+y<z-1) || (y+z<x-1) || (x+z<y-1))
{
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
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