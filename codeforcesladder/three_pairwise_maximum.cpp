#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll x,y,z;
 cin>>x>>y>>z;
//  x=max(a,b);
//  y=max(b,c);
//  z=max(a,c);
 if(x > y)swap(x,y);
        if(x > z)swap(x,z);
        if(y > z)swap(y,z);
        if(y == z){
            cout<<"YES\n";
            cout<<x<<" "<<x<<" "<<z<<endl;
        }
        else{
            cout<<"NO\n";
        }
}

int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}