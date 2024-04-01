#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
ll n;cin>>n;
if(n%3==0 || (n>3 && (n-1)%3==0)){cout<<n-n/3;nl;}
else if(n>3 && (n-1)%3!=0){cout<<n-n/3-1;nl;}
else{cout<<1;nl;}
}
int main(){
    fast;
 solve();
}
