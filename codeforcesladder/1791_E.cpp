#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll n,c1=0,c2=0,sum=0;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){c1++;}
        else{ c2++;}
    }
   if(c1%2==0){
    for(int i=0;i<n;i++){
        sum+=abs(arr[i]);
    }
    cout<<sum;nl;
   }
   else{
      for(int i=0;i<n;i++){
        arr[i]=abs(arr[i]);
        sum+=arr[i];
      }
       sort(arr,arr+n);
       cout<<sum-2*arr[0]<<endl;
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