#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int k,sum=0;
cin>>k;
int arr[12];
for(int i=0;i<12;i++){
cin>>arr[i];
sum+=arr[i];
}
int cnt=0;
if(sum<k){
   cout<<-1<<endl;
   return ;
}
 else if(k==0){
    cout<<0<<endl;
    return;
}

else{
    sort(arr,arr+12);
    // for(int i=0;i<12;i++){
    //     cout<<arr[i]<<" ";
    // }
    // nl;
    for(int i=11;i>=0;i--){
       cnt++;
       k-=arr[i];
       if(k<=0){
           break;
       }
    }
}
cout<<cnt<<endl;
}
int main(){
    fast;
 solve();
}
