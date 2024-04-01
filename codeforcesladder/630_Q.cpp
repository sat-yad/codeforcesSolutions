#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
#define pi 3.14159265359
void solve() {
long double  l1,l2,l3;cin>>l1>>l2>>l3;
long double z1 = (l1 * l1 * l1) / (8 * tan(pi / 3) * sin(pi / 3)) * sqrt(4 * sin(pi / 3) * sin(pi / 3) - 1);
long double z2 =  (l2 * l2 * l2) / (6 * tan(pi / 4) * sin(pi / 4)) * sqrt(4 * sin(pi / 4) * sin(pi / 4) - 1);
long double z3=5*(l3*l3*l3)/(24*tan(pi/5)*sin(pi/5))*sqrt(4*sin(pi/5)*sin(pi/5)-1);
cout<<fixed<<setprecision(15)<<z1+z2+z3<<endl;
}
int main(){
    fast;
 solve();
}
