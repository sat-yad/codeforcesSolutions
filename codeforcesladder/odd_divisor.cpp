#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
       ll n;
       cin>>n;
       ll temp=n&(n-1);
          if(temp==0){
            cout<<"NO"<<endl;
          }
          else{
            cout<<"YES"<<endl;
          }
       }
       
      

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
// 2
// 3
// 4
// 5
// 998244353
// 1099511627776
