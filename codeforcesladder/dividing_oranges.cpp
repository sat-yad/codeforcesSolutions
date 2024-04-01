#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n,k,cnt=0;
cin>>n>>k;
int arr[k];
int brr[901]={0};
for(int i=0;i<k;i++){
    cin>>arr[i];
    brr[arr[i]]=1;
}
for(int i=0;i<k;i++){
     cout<<arr[i];
for(int j=1;j<n;j++){
    cnt++;
    while(brr[cnt]){
        cnt++;
    }
    cout<<" "<<cnt;
}
cout<<endl;
}
}
int main(){
    fast;
 solve();
}
