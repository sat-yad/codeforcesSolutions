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
int arr[n],crr[n];
fl(0,n){
    cin>>arr[i];
    crr[i]=arr[i];
}
sort(crr,crr+n);
int min=crr[0], index=0,cnt=0;
// cout<<min<<endl;
for(int i=0;i<n;i++){
    if(arr[i]==min){
      index=i;
      cnt++;
    }
}
// cout<<cnt<<endl;
if(cnt==1){
    cout<<index+1<<endl;
}
else{
   cout<<"Still Rozdil"<<endl;
}
}
int main(){
    fast;
 solve();
}
