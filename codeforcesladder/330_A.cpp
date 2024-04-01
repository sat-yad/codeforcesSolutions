#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
template<typename T = long long int>
T nCr(T n, T k){
if(k>n/2){
k=n-k;
}
T ans=1;
for(T i=0;i<k;++i){
ans=(ans*(n-i))/(i+1);
}
return ans;
}
void solve() {
   
  ll n,m;
  cin>>n>>m;
  char arr[n][m];
  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        cin>>arr[i][j];
    }
  }
  ll r=0,c=0;
  for(ll i=0;i<m;i++){
        bool ans=true;
    for(ll j=0;j<n;j++){
        if(arr[j][i]=='S'){
            ans=false;
       break;
        }
    }
    if(ans){
        c++;
    }
  }
  for(ll i=0;i<n;i++){
        bool ans=true;
    for(ll j=0;j<m;j++){
        if(arr[i][j]=='S'){
            ans=false;
            break;
        }
    }
       if(ans)r++;
  }
  ll x=(n*c)+(r*m);
  x-=(c*r);
 
  cout<<x<<endl;
    }

int main(){
    fast;
 solve();
}
