#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 string s;cin>>s;
 char c='1';int ind;
 bool flag=false;
 fl(0,s.size()){
    if(s[i]=='0'){ ind=i;flag=true;break;}
 }
 if(flag){fl(0,s.size())if(i!=ind){cout<<s[i];}}
 else{fl(0,s.size()-1){cout<<s[i];}}
}
int main(){
    fast;
 solve();
}
