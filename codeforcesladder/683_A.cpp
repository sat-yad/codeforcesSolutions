#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int a,x,y;
    cin>>a>>x>>y;
    if(x>a || y>a|| x<0 || y<0){cout<<2;nl;}
    else if((x==a && (y>=0 && y<=a)) || (y==a && (x>=0 && x<=a)))
    {
        cout<<1;nl;
    }
    else { cout<<0;nl;}
}
int main(){
    fast;
 solve();
}
