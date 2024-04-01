#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
#define pi 3.14159265359
void solve() {
    int n;cin >> n;n*=2;
    // double m = (2*n - 2) * 180.0 / (2*n * (1.0));
    // double qq = cos((m/2) * pi / 180.0), mm = tan((m/2) * pi / 180.0);
    // while (n % 2 == 0) n /= 2;
    // if (n % 2 == 0) cout<<fixed<<setprecision(9)<<1/qq;
    // else cout<<fixed<<setprecision(9)<<mm;nl;
    cout<<fixed<<setprecision(9)<<2/sqrt((2-2*cos(2*pi/n)))*cos(2*pi/n/2);nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}
