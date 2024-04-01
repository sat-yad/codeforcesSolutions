#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   int n;cin>>n;
   int min=0,max=0;
   if(n%7==0){
    min=2*(n/7);
    max=2*(n/7);
   }
   else if(n%7==1){
    min=2*(n/7);max=2*(n/7)+1;
   }
   else if(n%7==6){
    min=2*(n/7)+1;
    max=max=2*(n/7)+2;
   }
   else{
    min=2*(n/7);max=2*(n/7)+2;
   }
   cout<<min<<" "<<max;nl;
}
int main(){
    fast;
 solve();
}
