#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int n,cnt=0;cin>>n;int a[n],b[n];
 fl(0,n){cin>>a[i];b[i]=a[i];}
 sort(b,b+n);
 fl(0,n){if(a[i]!=b[i]) cnt++;}
 if(cnt>2) cout<<"NO";
 else cout<<"YES";
}
int main(){
    fast;
 solve();
}
