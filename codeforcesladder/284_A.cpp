#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n,cnt1=0,cnt2=0;cin>>n;
 string s;cin>>s;
 for(int i=0;i<n;i++){
   if(s[i]=='I'){cnt1++;}
   if(s[i]=='A'){cnt2++;}
 }
 if(cnt1==0){cout<<cnt2;nl;}
 else if(cnt1==1){cout<<cnt1;nl;}
 else{cout<<0;nl;}
}
int main(){
    fast;
 solve();
}
