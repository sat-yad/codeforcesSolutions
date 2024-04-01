#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll a,b,sum;cin>>a>>b;
   sum=a;
   while(a>0){
    if(a/b<=0){
     break;
    }
    ll z1=a/b;
    ll z2=a%b;
    sum+=z1;
    a=z1+z2; 
   }
   cout<<sum<<endl;
}
int main(){
    fast;
 solve();
}

