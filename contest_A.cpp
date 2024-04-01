#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   int n, k, x;
    cin >> n >> k >> x;
    if(n==1 || k<=1) {cout<<"NO";nl;return;}
    if(x!=1){
      cout<<"YES";nl;cout<<n<<endl;
      fl(1,n+1) cout<<1<<" ";nl;return;
    } 
    if(n%2==0){
      cout<<"YES";nl;cout<<n/2;nl;
      fl(0,n/2) cout<<2<<" ";nl;return;
    }
    if(k>2){
      cout<<"YES";nl;cout<<(n-3)/2+1;nl;
      fl(0,(n-3)/2) cout<<2<<" ";cout<<3;nl;return;
    }
    cout<<"NO";
    nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}