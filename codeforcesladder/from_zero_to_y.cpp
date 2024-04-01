#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
ll rep(int y,int x,int i){
    ll copy,sum=0,z,n,rem_y;
    // for(int i=0;i<=9;i++){
    // ll z=x*pow(10,i);
    // ll n=y/z;
    // if(y/z==0){
    //     sum+=n;
    //     copy=y-z*n;
    //     break;
    // }
    z=x*pow(10,i);
      copy=y;
    while(y/z==0){
        z=x*pow(10,i);
        n=y/z;
         rem_y=copy-z;
           i++;
    }
    if(i>0){
    //   rep(y,x);
    }
  } 
    // return ;   

void solve(){
  ll x,y;
  cin>>x>>y;
  int i=0;
  rep(x,y,i);
  
  
}

int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
         solve();
    }
}