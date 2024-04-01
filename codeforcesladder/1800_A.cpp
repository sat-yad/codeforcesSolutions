#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int n,n1,n2,n3,n4;cin>>n;
 string s;cin>>s;
 transform(s.begin(), s.end(), s.begin(), ::tolower);
 if(n<4){cout<<"NO";}
//  vector<int> q,q1,q2,q3;

// //  cout<<s;nl;
//  for(int i=0;i<s.size();i++){
//     // s[i]=towlower(s[i]);
//     if(s[i]=='m') q.push_back(i);
//     else if(s[i]=='e') q1.push_back(i);
//     else if(s[i]=='o') q2.push_back(i);
//     else if(s[i]=='w') q3.push_back(i); 
//  }
//  n1=q[q.size()-1],n2=q1[q1.size()-1],n3=q2[q2.size()-1],n4=q3[q3.size()-1];
// //  cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4;nl;
//  if(s[n1+1]=='e' && s[n2+1]=='o' && s[n3+1]=='w') cout<<"YES";
//  else cout<<"NO";
//  nl;
 else{
    string s1="", ans="meow";s1+=s[0];
    fl(1,n){if(s[i]!=s[i-1]) s1+=s[i];}
    if(s1==ans) cout<<"YES";
    else cout<<"NO";
 }
 nl;
}
int main(){
    fast;
int t;
cin>>t;
string s;getline(cin,s);
while(t--){
 solve();
}
}