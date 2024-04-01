#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   string s;cin>>s;
   forward_list<char > list;
   for(auto i =s.rbegin();i!=s.rend();i++){
      if(list.empty()) list.push_front(*i);
      else if(list.front()<=*i) list.push_front(*i);
   }
   for(auto &i:list) cout<<i;
   nl;
}
int main(){
    fast;
 solve();
}
// thankstosamarasauteddybearsforthiscontest
