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
      int l=0;
      int r=0;
      map<int,int>mp1;
      map<int,int>mp2;
      for(int i=0;i<(n*(n-1))/2-1;i++){
         int k1,k2;
         cin>>k1>>k2;
         mp1[k1]++;
         mp1[k2]++;
         mp2[k1]++;
      }
      for(int i=1;i<=n;i++){
         if(mp1[i]!=n-1&&l==0){
            l=i;
         }
         else if(mp1[i]!=n-1){
           r=i;
         }
      }
      if(mp2[l]>mp2[r]){
         cout<<l<<" "<<r;
      }
      else{
         cout<<r<<" "<<l;
      }
}
int main(){
    fast;
 solve();

}