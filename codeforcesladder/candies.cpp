#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
   ll n;
   cin>>n;
   ll x,k=2;
//    ll ans=x;
   ll sum;
   int flag=0;
     while(k<30){
        sum=pow(2,k)-1;
        if(n%sum==0){
            
        x=n/sum;
        break;
     }
     k++;
     }
     cout<<x<<endl;
}

int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
         solve();
    }
}