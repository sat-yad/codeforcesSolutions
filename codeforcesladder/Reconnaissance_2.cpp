#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
     cin>>arr[i];
  }
  int l=0,r=n-1;
  int min=abs(arr[n-1]-arr[0]);
   for(int i=1;i<n;i++){
    if(abs(arr[i]-arr[i-1])<min){
       min=abs(arr[i]-arr[i-1]);
        l=i;
        r=i-1;
   }
   }
   cout<<r+1<<" "<<l+1;
}
int main(){
    fast;
// ll t;
// cin>>t;
// while(t--){
 solve();
// }
}