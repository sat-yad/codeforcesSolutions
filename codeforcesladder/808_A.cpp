#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  string s;cin>>s;
  ll n=s.size();
//   cout<<(int(s[0])-48);
   ll next=pow(10,n-1)*(int(s[0])-47);
   cout<<next-stoi(s);nl;
}
int main(){
    fast;
 solve();
}
