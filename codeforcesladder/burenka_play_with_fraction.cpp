#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
int main(){
    fast;
  ll t;
  cin>>t;
 
//   while(t--){
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;
//      if(a*d==c*b)
    // {
    //     cout<<"0"<<nl;
    // }
//      
//       else if(a==0 || c==0){
//         cout<<"1"<<endl;
//       }
//         else if( max(a*d,b*c)%min(a*d,b*c)==0){
//      cout<<"1"<<endl;
//         }
//       else{
//         cout<<"2"<<endl;
//       }
//   }
// long long t;
//   cin>>t;
  while(t--)
  {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*d==c*b)
    {
        cout<<"0"<<nl;
    }
    else if(a==0 || c==0)
        {
            cout<<"1"<<nl;
        }
 
    else if(max(a*d,c*b)%min(a*d,c*b)==0){
       cout<<"1"<<nl;}
    else {cout<<"2"<<nl;}
  }
  
}
