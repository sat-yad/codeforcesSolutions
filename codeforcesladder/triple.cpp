#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n;
cin>>n;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
int a[n];
int cnt=1,k=0;
for(int j=0;j<n-1;j++){
for(int i=j+1;i<n;i++){
    if(cnt==3 || arr[i]>arr[j]){
        break;
    }
    if(arr[i]==arr[j]){
     cnt++;
    }
}
 if(cnt==3){
        a[k]=arr[j];
        k++;
    }
    cnt=1;
}

if(k==0){
    cout<<-1<<endl;
}
else{
    sort(a,a+k);
cout<<a[k-1]<<endl;
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