#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";

#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
const int N=1e6;
void solve() {
    int n,k;
      cin>>n>>k;
       int a[n];
      for(int i=0;i<n;i++){
       cin>>a[i];
      }
     int res=0;
     for(int i=0;i<n-1;i++)
     {
       if(a[i+1]>a[i]){
        continue;
       }
       else {
           res+=(a[i]-a[i+1])/k+1;
           a[i+1]+=((a[i]-a[i+1])/k+1)*k;
       }
     }
     
     cout<<res<<endl;
}
int main(){
    fast;
 solve();
}
// 4 2
// 1 3 3 2
