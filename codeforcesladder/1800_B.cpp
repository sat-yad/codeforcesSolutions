#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   int n,k;cin>>n>>k;
   string s;cin>>s;
   vector<int> cntup(27,0),cntlow(27,0);
   fl(0,s.size()){
    if(s[i]>='a' && s[i]<='z') cntlow[s[i]-'a']++;
    else cntup[s[i]-'A']++;
   }
   int ans=0;
   fl(0,27){
        int a=min(cntlow[i],cntup[i]); ans+=a;
        cntup[i]-=a;cntlow[i]-=a;
        int rem= min(k,max(cntlow[i],cntup[i])/2);
        ans+=rem;k-=rem;
   }
        cout<<ans;nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}