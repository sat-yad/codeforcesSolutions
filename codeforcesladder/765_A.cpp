#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int n;cin>>n;
 string s,a;cin>>s;
 fl(0,n) cin>>a;
 if(n%2) cout<<"contest";
 else cout<<"home";
}
int main(){
    fast;
 solve();
}
