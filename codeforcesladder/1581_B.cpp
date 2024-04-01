#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll n,m,k;
   cin>>n>>m>>k;
   ll c1=n*(n-1)/2,c2=n-1;
   if(k<2){cout<<"NO";nl;}
   else if(m>=c2 && m<c1 && k>3){cout<<"YES";nl;}
   else if(m==c1 && k>2){cout<<"YES";nl;}
   else if(n==1 && m==0 ){cout<<"YES";nl;}
   else{cout<<"NO";nl; }
}
int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
 solve();
 }
}  
