#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
bool pal(string str){
    fl(0,str.size()/2){
        if(str[i]!=str[str.size()-1-i]) return false;
    }
    return true;
}
void solve() {
    string s;cin>>s;
    int cnt=0;
    fl(0,s.size()-1) if(s[i]==s[i+1]) cnt++;
    if(cnt==s.size()-1){cout<<-1;nl;return;}
    else if(pal(s)==true){cout<<s.size()-1;nl;return;}
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}