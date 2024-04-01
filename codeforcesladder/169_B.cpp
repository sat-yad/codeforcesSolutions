#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 string s,t;cin>>s>>t;
 int c=0;
 sort(t.begin(),t.end(),greater<char>());
 fl(0,s.size()){if(s[i]<t[c]){s[i]=t[c]; c++;} if(c==t.size()) break;}
 cout<<s;nl;
}
int main(){
    fast;
 solve();
}
