#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
      int n,sum=0,sum1=0,cnt=0;cin>>n;
       int arr[n];
      fl(0,n){ cin>>arr[i]; sum+=arr[i];}
       sort(arr,arr+n);
       for(int i=n-1;i>=0;i--){
        sum1+=arr[i];
        sum-=arr[i];
       if(sum>=sum1){
        cnt++;
        }
       }
       cout<<cnt+1<<endl;
}
int main(){
    fast;
 solve();
}
