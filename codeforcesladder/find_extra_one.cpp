#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
        ll n;
        cin>>n;
         ll c1=0;
         ll c2=0;

       while(n!=0){
        ll a,b;
        cin>>a>>b;
        if(a<0){
          c1++;
        }
        else if(a>0){
            c2++;
        }
           n--;
       }
       if((c1<=1 && c2>=1) || (c2<=1 && c1>=1)){
        cout<<"YES"<<endl;
       }
    //     if(c2==1 && c2>=1){
    //     cout<<"YES"<<endl;
    //    }
       else{
        cout<<"NO"<<endl;
       }
}
//3
// 1 2
// 2 1
// 4 60

int main(){
    fast;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
}