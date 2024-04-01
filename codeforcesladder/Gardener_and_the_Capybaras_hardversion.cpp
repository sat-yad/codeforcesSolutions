#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   string s;
   cin>>s;
   if(s[0]==s[s.length()-1] || s[1]=='b'){
    cout<<s[0]<<" "<<s.substr(1,s.length()-2)<<" "<<s[s.length()-1]<<endl;
   }
    else {
         cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2)<<endl;
    }
   }

int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}