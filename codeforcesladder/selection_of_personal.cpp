#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
//imp
// template<typename T = long long int>
// T nCr(T n, T k){
// 	if(k>n/2){
// 		k=n-k;
// 	}
// 	T ans=1;
// 	for(T i=0;i<k;++i){
// 		ans=(ans*(n-i))/(i+1);
// 	}
// 	return ans;
// }
void solve() {
ll n;
cin>>n;
ll sum=0;
// ll cpy=1,x=1;
// ll c=n;
// for(ll i=5;i<=7;i++){
//     for(ll j=1;j<=i;j++){
//       x*=j;
//       cpy*=(c-i+j);
//     }
//     sum+=cpy/x;
//     cpy=1;
//     x=1;
// }
ll x=120,y=720;
ll x1=n*(n-1)*(n-2)*(n-3)*(n-4);
ll x2=x1*(n-5);
ll x3=n/1*(n - 1)/2*(n-2)/3*(n-3)/4*(n-4)/5*(n-5)/6*(n-6)/7;
// ll y1=x1/x;
// ll y2=x2/y;
// ll y3=x3/z;
sum=x1/x+x2/y+x3;
cout<<sum<<endl;
// cout<<nCr(n,(ll)5)+nCr(n,(ll)6)+nCr(n,(ll)7)<<endl;
}
int main(){
    fast;
 solve();
}
// 3*(3*n-1)*((long long)1<<(2*n-6))    