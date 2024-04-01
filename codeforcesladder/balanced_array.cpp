#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
   ll n;
   cin>>n;
   int arr[n];
   ll sum1=0;
   ll sum2=0; 
   if(n%4!=0){
    cout<<"NO"<<endl; 
}
else{
    cout<<"YES"<<endl;
//        for(int i=2;i<=n;i+=2){
//     arr[j]=i;
//     j++;
//    }
//    for(int i=1;i<n;i+=2){
//     arr[j]=i;
//     j++;
//    }
  for(int i=2; i<=n; i+=2){
  cout<<i<<" ";
  sum1+=i;
 }
 for(int i=1; i<n-2; i+=2){
 cout<<i<<" ";
  sum2+=i;
 } 
  cout<<sum1-sum2<<endl;
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