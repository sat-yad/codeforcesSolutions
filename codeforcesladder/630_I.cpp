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
ll n;cin>>n;
cout<<(ll)(24*pow(4,n-3))+(ll)pow(4,n-4)  *(n-3)*36;nl;

}
int main(){
    fast;
 solve();
}
