#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
int gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve() {
   ll t,n;cin>>t;
   for(int i=0;i<t;i++){
        cin>>n;
    //    ll g_cd=gcd(n+1,4*n);
    //    cout<<g_cd;nl;
       ll lcm=(n+1)*n*4/gcd(n+1,4*n);
    //    cout<<lcm;nl;
       cout<<lcm/(n+1)+1;nl;
   }
}
int main(){
    fast;
 solve();
}
