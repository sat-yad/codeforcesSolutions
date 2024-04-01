#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,m,min=0,max=0;cin>>n>>m;
  ll arr[n],brr[n];
  string s[101];
  map<string,int>mp;
  fl(0,n){cin>>arr[i];}
  fl(0,m){cin>>s[i];mp[s[i]]++;}
  sort(arr,arr+n);
//   for (int i = 0; i < n; i++)
//   {
//       cout << arr[i] << ' ';
//   }
  nl;
//   for(auto i:mp){cout<<i.first<<" "<<i.second<<" ";}nl;
  int k=0;
  fl(0,m){
    if(mp[s[i]]!=0){
        brr[k++]=mp[s[i]];
        // cout<<brr[k];
    }   
    mp[s[i]]=0;
  }
//   for(int i=0;i<k;i++){cout<<brr[i]<<' ';}nl;
  sort(brr,brr+k,greater<int>());
//   for (int i = 0; i < k; i++)
//   {
//     cout << brr[i] << ' ';
//   }
//   nl;
  fl(0,k){min+=arr[i]*brr[i];
//   cout<<min;nl;
  max+=arr[n-i-1]*brr[i];
//   cout<<max;nl;
}
  cout<<min<<" "<<max;nl;
}
int main(){
    fast;
 solve();
}
