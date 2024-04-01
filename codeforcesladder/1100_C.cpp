#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
#define pi 3.14159265359
void solve() {
 double n,r;cin>>n>>r;
 double x=pi*(n-2)/n;
 cout<<fixed<<setprecision(7)<<r*cos(x/2)/(1-cos(x/2));nl;
}
int main(){
    fast;
 solve();
}
