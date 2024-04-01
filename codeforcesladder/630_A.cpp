#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll a,b,c;cin>>a>>b>>c;
 double r1 = double((-b + sqrt(b * b - 4 * a * c)) / (2.0 * a));
 double r2 = double((-b - sqrt(b * b - 4 * a * c)) / (2.0 * a));
 cout<<fixed<<setprecision(12)<<max(r1,r2);nl;
 cout << fixed << setprecision(15) << min(r1,r2);nl;
}
int main(){
    fast;
 solve();
}
