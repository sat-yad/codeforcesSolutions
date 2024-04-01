#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n,cnt=0,cnt1=0;cin>>n;
 string s,s1="",s2="";cin>>s;
 s1=s.substr(0,n);s2=s.substr(n,n);
//  cout<<s1<<" "<<s2;nl;
 sort(s1.begin(),s1.end());sort(s2.begin(),s2.end());
 for(ll i=0;i<n;i++){
    if(s1[i]>s2[i]) cnt++;
    if(s1[i]<s2[i]) cnt1++; }
    if(cnt==n || cnt1==n)  cout<<"YES";
    else cout<<"NO";
    nl;
}
int main(){
    fast;
 solve();
}
