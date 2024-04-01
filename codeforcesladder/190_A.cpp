#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n,m;cin>>n>>m;
if(n==0 && m==0){cout<<0<<" "<<0;nl;return;}
else if(n==0 && m>=0){
    cout << "Impossible";nl;return;
}
if(n>0 && m==0){cout<<n<<" "<<n;nl;}
else{
    cout<<n+m-min(n,m)<<" "<<n+m-1;nl;
}
}
int main(){
    fast;
 solve();
}
