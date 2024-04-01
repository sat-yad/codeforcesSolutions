#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n,k,cnt=0;cin>>n>>k;
    string s;cin>>s;
    fl(0,k){if(s[i]=='W') cnt++;}
    int c=cnt;
    fl(k,n){
        if(s[i]=='W') cnt++;
        if(s[i-k]=='W') cnt--;
        c=min(c,cnt);
    }
    cout<<c;nl;
}   
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}