#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll h,l;cin>>h>>l;double r;
    cout.setf(ios::fixed);
    cout<<setprecision(13);

     r=(pow(l,2)-pow(h,2))/(2*h);
    //  cout<<setprecision(9);
    cout<<r;
}
int main(){
    fast;
 solve();
}
