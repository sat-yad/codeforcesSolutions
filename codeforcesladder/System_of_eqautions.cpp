#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
  ll x,y,a,b;
  cin>>x>>y;
  ll count=0;
 for(int a=0;a*a<=x &&a<=y ;a++){
    b=x-a*a;
    if(a+b*b==y){
        count++;
    }
 }
 cout<<count<<endl;
  
  
}

int main(){
    fast;
    // ll t;
    // cin>>t;
    // while(t--){
         solve();
    // }
}