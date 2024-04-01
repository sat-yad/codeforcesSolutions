#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
   int  n;
   cin>>n;
   int  arr[100000];
   ll mul=1;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
    for(int i=0;i<n;i++){
    mul*=arr[i];
   }
   mul +=n-1;
   mul*=2022;
   cout<<mul<<endl;
}
int main(){
    fast;
    int  t;
    cin>>t;
    while(t--){
    solve();
}
}