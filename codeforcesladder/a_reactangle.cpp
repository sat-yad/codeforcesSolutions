#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
ll x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
ll x=(x2-x1)/2;
ll y=(y2-y1)/2;
cout<<x*y+(x+1)*(y+1)<<endl;
}
int main(){
    fast;
 solve();
}
