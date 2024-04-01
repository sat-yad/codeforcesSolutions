#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int n,cnt=0,a,b,d;cin>>n;
 unordered_map<int,int > mp;
 bool flag=false;
 fl(0,n){cin>>a>>b;d=a+b;mp[a]=d;
   if(mp.count(d)){
      if(mp[d]==a){flag=true;break;}
   }
 }
 if(flag) cout<<"YES";
 else cout<<"NO";
 nl;
}
int main(){
    fast;
 solve();
}
