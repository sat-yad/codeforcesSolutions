#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void  solve() {
    // if(n==0){
    //     return 1;
    // }
    // return 6*n+solve(n-1);
     
ll n;
cin>>n;
// ll sum=0;
// for(int i=1;i<=n;i++){
//     sum+=6*i;
// }
// cout<<sum+1<<endl;
ll ans=3*(n+1);
cout<<1+n*ans<<endl;
}
int main(){
    fast;
//     ll n;
//     cin>>n;
//    cout<< solve(n)<<endl;
solve();
}
