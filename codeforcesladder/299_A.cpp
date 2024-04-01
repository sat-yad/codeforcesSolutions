#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,cnt=0;cin>>n;
  ll arr[n];fl(0,n){cin>>arr[i];}
  sort(arr,arr+n);
  for(int i=1;i<n;i++){
    if(arr[i]%arr[0]==0){
        cnt++;
    }
  }
  if(cnt==n-1){cout<<arr[0];nl;}
  else{cout<<-1;nl;}
  // ll n,z,a;cin>>n;
  // cin>>a;
  // fl(0,n-1){cin>>z;if(z%a!=0){cout<<-1;nl;return;}}
  // cout<<a;nl;

}
int main(){
    fast;
 solve();
}
