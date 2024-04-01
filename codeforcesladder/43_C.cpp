#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n,a,cnt1=0,cnt2=0;cin>>n;
 fl(0,n){cin>>a;if(a%3==1) cnt1++;if(a%3==2) cnt2++;}
 cout<<(n-cnt1-cnt2)/2 +min(cnt1,cnt2);nl;
}
int main(){
    fast;
 solve();
}
