#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n,c=0;cin>>n;vector<ll> v;
 for (int i = 1; i <= sqrt(n); i++){
     if (n % i == 0){
         if (n / i == i)
             v.push_back(i);
         else {v.push_back(i);v.push_back(n/i);} 
     }
 }
//  for(auto i:v){cout<<i<<" ";}
//  nl;
 string s=to_string(n);
//  cout<<s<<" main";nl;
 for(int i=0;i<v.size();i++){
      string s1=to_string(v[i]);
      for(int j=0;j<s1.size();j++){
          if(s.find(s1[j])!=-1){ c++;break;}
           }
 }
 cout<<c;nl;
}
int main(){
    fast;
 solve();
}
