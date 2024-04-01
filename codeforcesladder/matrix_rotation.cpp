#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
 int a,b,c,d;
 cin>>a>>b;
 cin>>c>>d;
   if(a>b&&a>c&&a>d&&d<b&&d<c){
        cout<<"YES"<<endl;
     }
     else if(b>a&&b>c&&b>d&&c<a&&c<d){
         cout<<"YES"<<endl;
     }
     else if(c>a&&c>b&&c>d&&b<a&&b<d){
       cout<<"YES"<<endl;
     }
     else if(d>a&&d>b&&d>c&&a<b&&a<c){
         cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
    }
int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
         solve();
    }
}
