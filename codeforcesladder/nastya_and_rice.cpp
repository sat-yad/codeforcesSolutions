#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
    int n,x1,x2,x3,x4;
    cin>>n>>x1>>x2>>x3>>x4;
    int y1=n*(x1+x2);
    int y2=n*(x1-x2);
  if(y2>x3+x4   || y1<x3-x4){
    cout<<"NO"<<endl;
//   if()
  }
    else{
        cout<<"YES"<<endl;
    }
//    int i;
//    int flag =0; 
//   int arr[1000];
//    for( i=c-d;i<=c+d;i++){
//         if(n*(a-b)<i<n*(a+b)){
//          flag=1;
//          break;
//         }
//    }
//    if((flag==1) ){
//     cout<<"YES"<<endl;
//    }
//    else if(i==c-d){
//     cout<<"NO"<<endl;
//    }
}
int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
         solve();
    }
}
// 5
// 7 20 3 101 18
// 11 11 10 234 2
// 8 9 7 250 122
// 19 41 21 321 10
// 3 10 8 6 1
