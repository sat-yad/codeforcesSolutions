#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll x,y,x1,y1=0,x2=0,y2;cin>>x>>y;
   if(x<0){ x1=x-abs(y); }
   if(y<0){y2=y-abs(x);}
   if(x>0){x1=x+abs(y);}
   if(y>0){y2=y+abs(x);}
   if(x>0 && y>0){
   cout<<x2<<" "<<y2<<' '<<x1<<" "<<y1;nl;}
   if(x<0 && y>0){cout<<x1<<" "<<y1<<' '<<x2<<" "<<y2;nl;}
   if(x<0 && y<0){ cout<<x1<<" "<<y1<<' '<<x2<<" "<<y2;nl;}
   if(x>0 && y<0){ cout<<x2<<" "<<y2<<' '<<x1<<" "<<y1;nl;}
}
int main(){
    fast;
 solve();
}
