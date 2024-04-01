#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    string s;cin>>s;
    string a = "AHIMOTUVWXY";
    for (int i=0;i<(s.size()/2)+1;i++){
        int cnt=0;
        for (int j=0;j<a.size();j++){
            if(s[i]==a[j]) cnt++;
        }
        if (cnt==0){cout<<"NO"; return;}
    }
    for(int i=0;i<(s.size()/2)+1;i++){
        if(s[i]!=s[s.size()-i-1]){cout<<"NO";return;}
    }
    cout<<"YES";
}
int main(){
    fast;
 solve();
}
