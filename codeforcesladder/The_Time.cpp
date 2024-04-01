#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   string str; cin>>str;
   ll a;cin>>a;
   ll hh=stoi(str);
   // cout<<hh;nl;
   string s=str.substr(3,2);
   ll tt=stoi(s);
   // cout<<tt<<endl;
   ll t=hh*60+tt;
   t+=a;
   string s1=to_string((t/60)%24);
   // cout<<s1<<endl;
   if(s1.size()==1){
      s1.insert(s1.begin(),'0');
   }
   string s2=to_string(t%60);
   // cout<<s2<<endl;
   if(s2.size()==1){
      s2.insert(s2.begin(),'0');
   }
   cout<<s1<<":"<<s2;nl;

}
int main(){
    fast;
 solve();
}

