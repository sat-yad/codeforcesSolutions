#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void print_binary(ll num,int n)
{
    for (int i =n-1 ; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
ll dis(string s){
    ll d=0;
    for(int i=s.size()-1;i>=0;i--){
        d+=abs(int(s[i])-48)*pow(2,s.size()-i-1);
    }
    return d;
}
void solve() {
  
  string s, t, ans = "";
  cin >> s >> t;
  ll cnt = 0;
  for (int i = 0; i < s.size(); ++i)
  {
      if (s[i] != t[i])
      {
          ans += (cnt % 2 == 0) ? s[i] : t[i];
          cnt++;
      }
      else
          ans += s[i];
  }
  if (cnt & 1)
      cout << "impossible";
  else
      cout << ans;
}
int main(){
    fast;
 solve();
}
    