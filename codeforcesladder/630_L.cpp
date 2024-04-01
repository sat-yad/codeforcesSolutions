#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  // long double n1,n2,n3,n4,n5,ans;cin>>n1,n2,n3,n4,n5;
  long long ans,z;
string s;cin>>s;
ans = ((int)s[0] - 48) * 10000 + ((int)s[2] - 48) * 1000 + ((int)s[4] - 48) * 100 + ((int)s[3] - 48) * 10 + ((int)s[1] - 48);
// cout<<ans;nl;
 z= ans % 100000 * ans % 100000* ans % 100000 * ans % 100000*ans%100000;
 if(z/10==0){cout<<z<<z<<z<<z<<z;nl;}
 else cout << z;nl;
}
int main(){
    fast;
 solve();
}
