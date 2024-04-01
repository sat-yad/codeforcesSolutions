#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
template<typename T = long long int>
T nCr(T n, T k){
    if(k>n/2){
        k=n-k;
    }
    T ans=1;
    for(T i=0;i<k;++i){
        ans=(ans*(n-i))/(i+1);
    }
    return ans;
}
void solve() {
     ll  n;
     cin>>n;
     if(n>1){
    //  int a=n*(n+1)*(n+2)*(n+3)*(n+4)*n*(n+1)*(n+2);
     ll  a=nCr(n+4,(ll)5)*nCr(n+2,(ll)3);
     cout<<a<<endl;
     }
     else{
        cout<<1<<endl;
     }
}
int main(){
    fast;
 solve();
}
