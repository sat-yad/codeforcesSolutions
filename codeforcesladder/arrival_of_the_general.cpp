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
int arr[n];
int min=500,min_index;
int max=0,max_index;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<=min ){
        min=arr[i];
        min_index=i;
    }
    if(arr[i]>max){
        max=arr[i];
        max_index=i;
    }
}
if(min_index<max_index){
    min_index++;
}
cout<<max_index+(n-1-min_index)<<endl;
}
int main(){
    fast;
 solve();
}
