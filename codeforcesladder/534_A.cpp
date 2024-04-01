#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   int n;cin>>n;
   if(n<=2) cout<<"1\n1";
   else if(n==3) cout<<"2\n1 3";
   else if(n==4) cout << "4\n3 1 4 2 ";
   else{
    cout<<n;nl;
    for(int i=1;i<=n;i+=2) cout<<i<<" ";
    for(int i=2;i<=n;i+=2) cout<<i<<" ";
   }
}
int main(){
    fast;
 solve();
}
