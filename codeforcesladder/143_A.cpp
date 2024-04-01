#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   int r1,r2,c1,c2,d1,d2,x1,x2,y1,y2;
   cin>>r1>>r2;cin>>c1>>c2;cin>>d1>>d2;
   x2=(c1+d2-r1)/2;x1=(r1+c1-d2)/2;
   y1=d2-x2;y2=d1-x1;
   if(x1==y1 || x2==y2|| x2==y1 || x1==x2 || x1==y2||y1==y2){cout<<-1<<endl;
   return;}
   int arr[4]={x1,x2,y1,y2},cnt=0;
   for(int i=0;i<4;i++){
    for(int j=1;j<=9;j++){
          if(arr[i]==j){cnt++;}
    }
   }
   if(cnt<4){cout<<-1;return;}
   else if((x1+x2!=c1) ||(y1+y2!=c2) ||(x1+y1!=r1)||
    (x2+y2!=r2) ||(y1+x2!=d2) ||(x1+y2!=d1)){
    cout<<-1;nl;return;}
   else{
    cout<<x1<<" "<<y1;nl;
    cout<<x2<<" "<<y2;nl;
   }
   
}
int main(){
    fast;
 solve();
}
// 9 12
// 3 17
// 10 10
// 1 8
// 2 9