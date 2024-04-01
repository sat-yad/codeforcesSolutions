#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
// For Division 1: 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399
void solve() {
   int n;
   cin>>n;
   if(n>=1900){
    cout<<"Division 1"<<endl;
   }
   else if(n>=1600 && n<=1899){
    cout<<"Division 2"<<endl;
   }
   else if(n>=1400  && n<= 1599){
    cout<<"Division 3"<<endl;
   } 
   else{
    cout<<"Division 4"<<endl;
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