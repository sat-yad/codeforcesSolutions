#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,m,a,b,sum=0;
  cin>>n>>m>>a>>b; 
  if(m>n ){
    if(b>a*n){
    cout<<a*n<<endl;
    return;}
    else{
        cout<<b<<endl;
        return;
    }
  }
  else{
    if(a<=b){
        if(n*a<(n/m)*b){
            cout<<n*a<<endl;
        }
        else
    cout<<(n/m)*b +(n%m)*a<<endl;
  }
  else{
    if(a*(n%m)>b){
    cout<<(n/m +1)*b;nl;}
    else{
     cout<<(n/m)*b + (n%m)*a;nl;
    }
  }
  }
}
int main(){
    fast;
 solve();
}