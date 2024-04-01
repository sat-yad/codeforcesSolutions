#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int x1,y1,z1,x2,y2,z2;
    cin>>x1>>y1>>z1;
    cin>>x2>>y2>>z2;
    double d=sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
    // cout<<d<<endl;
    if(d<=sqrt(2)){
         cout<<"YES"<<endl; 
         return;}
    else{
     cout<<"NO"<<endl;}
}
int main(){
    fast;
 solve();
}
