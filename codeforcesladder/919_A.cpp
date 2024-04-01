#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll n,m;cin>>n>>m;
   double a[n],b[n],c[n];
   cout<<setprecision(9);
   for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];nl;
    c[i]=a[i]/b[i];
   }
   sort(c,c+n);
   cout<<c[0]*m;nl;
}
int main(){
    fast;
 solve();
}
