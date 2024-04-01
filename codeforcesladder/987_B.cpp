#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  long double x,y;
  cin>>x>>y;
ld a1=y*log(x);
ld a2=x*log(y);
  if(a1>a2){cout<<'>';nl;}
  else if(a1==a2){cout<<'=';nl;}
  else{cout<<'<';nl;}
}
int main(){
    fast;
 solve();
}
     // for(int i=0;i<str.length();i++){
        //     if(str[i]>='a' && str[i]<='z'){
        //         str[i]=toupper(str[i]);
        //     }
        //     else{
        //         str[i]=tolower(str[i]);
        //     }
        
