#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll n,k;cin>>n>>k;
   k--;
   while(k--){
    string s=to_string(n);
    sort(s.begin(),s.end());
    if(s[0]=='0') break;
    n+=((s[0]-'0')*(s[s.size()-1]-'0'));
   }
    cout<<n;nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}