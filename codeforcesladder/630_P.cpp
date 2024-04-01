#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 long double  n,r;cin>>n>>r;
 long double y = sin(3.14159265359*3/(2*n)) ;
 long double z = sin(3.14159265359/(2*n));
 long double v = sin(3.14159265359/(n));
 long double ans = n * r * r * z * v * (1 / y) ;
//  printf("%Lf",ans);
 cout << setprecision(15) <<(ans);
 nl;
//  cout << tan(3.14159265359 / 4);
//  nl
 // tan(45)
}
int main(){
    fast;
 solve();
}
