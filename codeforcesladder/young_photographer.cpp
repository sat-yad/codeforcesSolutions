#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   int n,x0,a,b;
   cin>>n>>x0;
   int low=INT_MIN;
   int high=INT_MAX;
   while(n--){
      cin>>a>>b;
      if(a>b){ swap(a,b);}
      if(low<a){ low=a; }
      if(b<high){  high=b;}
   }
    if(high<low){  cout<<-1<<endl; }
    else{ 
      if(x0>=low && x0<=high){ cout<<0<<endl;}
      else if(x0<low){ cout<<low-x0<<endl;}
      else { cout<<x0-high<<endl; }
    }
}
int main(){
    fast;
 solve();
}
