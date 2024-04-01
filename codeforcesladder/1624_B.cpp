#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll a,b,c;
   ll arr[4];
   cin>>a>>b>>c;
    if((((2*b-c)%a==0) && (2*b-c)>0) ||((2*b-a)%c==0  && (2*b-a)>0)
    || ((a+c)%(2*b)==0)){
         cout<<"YES";nl;
    }
    else{
        cout<<"NO";nl;
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