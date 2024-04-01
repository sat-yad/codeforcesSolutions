#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 double n,b,sum=0;cin>>n>>b;
 double arr[101];double cup[101]={0};
 fl(0,n){cin>>arr[i];}
 int max=INT_MIN,min=INT_MAX,ind=-1;
 fl(0,n){if(max<=arr[i]){max= arr[i];ind=i;} if(min>=arr[i])min=arr[i];}
//  cout<<max;nl;cout<<ind;nl;
if(max-min>b){cout<<-1;return;}
 fl(0,n){cup[i]+=(arr[ind]-arr[i]);arr[i]+=cup[i];b-=cup[i];if(b<=0){break;}}
//  cout<<b;nl;
// fl(0,n){cout<<arr[i]<<" ";}nl;
 fl(0,n-1){if(arr[i]!=arr[i+1]){cout<<-1;nl;return;}}
  fl(0,n){
  cout<<fixed<<setprecision(6)<<cup[i]+b/n;nl;}
}
int main(){
    fast;
 solve();
}
