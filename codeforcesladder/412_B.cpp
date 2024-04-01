#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int n,k,sum=0;cin>>n>>k;
 int arr[n];
 fl(0,n){cin>>arr[i];sum+=arr[i];}
 if(n==1){cout<<arr[0];nl;return;}
   sort(arr,arr+n);int ans,cnt=0;
   for(int i=n-1;i>=0;i--){
       ans=arr[i];cnt=0;
       for(int j=n-1;j>=0;j--){
            if(ans<=arr[j]){
                 cnt++;
            }
       }
       if(cnt>=k){break;};
       }
       cout<<ans;nl;
   }
 
  
int main(){
    fast;
 solve();
}
