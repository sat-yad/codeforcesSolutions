#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll n,sum=0,cnt=0,j=0;cin>>n;ll arr[n],c[n];
    for(int i=0;i<n;i++){
         cin>>arr[i];
         sum+=arr[i];
    }
    // cout<<sum;nl;
    for(int i=0;i<n;i++){
           ll avg=sum-arr[i]; 
           if((avg%(n-1))==0 ) {
           if(avg/(n-1)==arr[i]){
            c[j++]=i+1;
            cnt++;
           }
           }
    }
    cout<<cnt;nl;
    for(int i=0;i<j;i++){
        cout<<c[i]<<" ";
    }
}
int main(){
    fast;
 solve();
}
