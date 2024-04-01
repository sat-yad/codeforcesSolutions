#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll x,y;cin>>x>>y;
    if(x==1||y==1){
        cout<<"1";nl;
        cout<<x<<" "<<y;nl;
        return;
    }
    cout<<"2\n";
    cout<<"1 "<<y-1;nl;
    cout<<x<<" "<<y;nl;
    return;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}