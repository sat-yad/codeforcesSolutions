#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int n,k;
     cin>>n>>k;
     int a[n];
     
     for(auto &x:a) cin>>x;
     
     if(n<=k){
         for(auto val:a){
             cout<<val<<" ";
         }
         cout<<endl;
         continue;
     }
     
     if(n<2*k){
         vector<int> v;
         for(int i=0;i<n-k;i++){
             v.push_back(a[i]);
         }
         
         for(int i=n-1;i>=k;i--){
             v.push_back(a[i]);
         }
         
         sort(v.begin(),v.end());
         int j=0;
         for( j=0;j<n-k;j++){
             cout<<v[j]<<" ";
         }
         for(int i=n-k;i<k;i++){
             cout<<a[i]<<" ";
         }
         for(j;j<v.size();j++){
             cout<<v[j]<<" ";
         }
         cout<<endl;
         
         
     }
     else{
         sort(a,a+n);
         for(auto val:a){
             cout<<val<<" ";
         }
         cout<<endl;
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