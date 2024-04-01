#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n,sum=0;cin>>n;int arr[n];
    bool f=0,c=0;
    fl(0,n){
        cin>>arr[i];sum+=arr[i];
        if(arr[i]==-1) c=1;
        if(i>0 && (arr[i]==arr[i-1]) && (arr[i]==-1)) f=1;
    }
    if(f) sum+=4;
    else if(!c) sum-=4;
    cout<<sum;nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}