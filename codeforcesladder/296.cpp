#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n,cnt=0,cnt2=0;cin>>n;
  int arr[n];
//   fl(0,n) cin>>arr[i];
//   fl(0,n-1){if(arr[i]==arr[i+1]) cnt++; else cnt2++; }
//     if(cnt>cnt2) cout<<"NO";
//     else cout<<"YES";
  map<int, int> mp;
  fl(0,n){cin>>arr[i];mp[arr[i]]++;cnt=max(cnt,mp[arr[i]]);}
  cout<<(cnt>(n+1)/2?"NO":"YES");
  nl;
}
int main(){
    fast;
 solve();
}
