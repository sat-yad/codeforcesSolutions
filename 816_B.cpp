#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
#define N 200010
int a[N],b[N];
void solve() {
     int n,k,q,l,r;cin>>n>>k>>q;
     fl(0,n){cin>>l>>r;a[l]++,a[r+1]--;}
     fl(1,N) a[i]+=a[i-1];
     fl(1,N){if(a[i]>=k) b[i]++;}
     fl(1,N) b[i]+=b[i-1];
     while(q--){cin>>l>>r; cout<<b[r]-b[l-1];nl;}
}
int main(){
    fast;
 solve();
}
