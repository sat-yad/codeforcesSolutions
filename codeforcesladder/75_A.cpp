#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  string a,b,c="",d="",e="";
  cin>>a;
  cin>>b;
  ll sum=stoi(a)+stoi(b);
  string ans=to_string(sum);
    for(int i=0;i<ans.size();i++){
    if(ans[i]!='0'){
        e+=ans[i];
    }
  }
  for(int i=0;i<a.size();i++){
    if(a[i]!='0'){
        c+=a[i];
    }
  }
    for(int i=0;i<b.size();i++){
    if(b[i]!='0'){
        d+=b[i];
    }
  }
  if(e==to_string(stoi(c)+stoi(d))){
    cout<<"YES"<<endl;
    return;
  }
  else{
    cout<<"NO"<<endl;
  }
}
int main(){
    fast;
 solve();
}

