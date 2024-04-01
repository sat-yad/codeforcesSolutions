#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,c=0,c1=0,j=0;cin>>n;
  ll arr[n];
  fl(0,n){cin>>arr[i];if(arr[i]<0){c++;}}
  if(c>=1){cout<<(c+1)/2;nl;}
  if(c==0){cout<<1;nl;}
  for(int i=0;i<n;i++){ 
    if(arr[i]<0){c1++;}
    else{j++;}
      if(c1==3){
       cout<<j+c1-1<<" ";
        c1=0;
        j=0;
        i--;
      }
  }
   cout<<j+c1<<" ";

}
int main(){
    fast;
 solve();
}
