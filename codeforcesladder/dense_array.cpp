#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
      int n,j,k=0;
      cin>>n;
      float a,maxm,minm;
      int arr[n];
      for(int i=0 ;i<n;i++){
        cin>>arr[i];
      }
      for(int i=0;i<n;i++){
        j=i+1;
        if(j<n){
             maxm=max(arr[i],arr[j]);
             minm=min(arr[i],arr[j]);
             a=maxm/minm;
             while(a>2){
                     minm*=2;
                     a=maxm/minm;
                     k++;
             }
        }
      }
      cout<<k<<endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}