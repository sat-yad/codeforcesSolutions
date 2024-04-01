#include <bits/stdc++.h>
using namespace std;
#define ll               long long
#define uin              unsigned int
#define ull              unsigned long long
#define ld               long double 
#define fl(i,w,n)        for(ll i=w;i<n;i++)
#define rfl(i,w,n)       for(ll i=w;i>=n;i--)
#define  F              first
#define  S             second
#define  B              begin()
#define  E               end()
#define EB               emplace_back
#define PB               push_back
#define P                pop()
#define PRES(c,x)        ((c).find(x)!=(c).end())
#define all(x)           x.begin(), x.end()
typedef vector<string>   vs;
typedef pair<int,int>    pii;
typedef pair<ll,ll>      pll;
typedef vector<int>      vi;
typedef vector<ll>       vl;
typedef vector<vi>       vvi;
typedef vector<vl>       vvl;
typedef vector<pii>      vpii;
typedef vector<pll>      vpll;
#define um(x, y)          unordered_map<x, y>
#define us(x)             unordered_set<x>
// #define mp                  map<x,y> 
// #define mp                 map lii
#define mem1(a)                memset(a,-1,sizeof(a))
#define mem0(a)                memset(a,0,sizeof(a))
#define sum(a)          ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a)         (*min_element((a).begin(), (a).end()))
#define maxe(a)         (*max_element((a).begin(), (a).end()))
#define mini(a)         ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a)          ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x)      ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x)      ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define nl               <<"\n";
#define nll              cout<<"\n";
#define Yes              cout<<"Yes"<<"\n";
#define No               cout<<"No"<<"\n";
#define PI               3.1415926535897932384626
#define SET(n)           cout << fixed << setprecision(n)
#define get(s)              getline(cin, s)
#define ppc                 __builtin_popcount
#define ppcll               __builtin_popcountll
#define clz                 __builtin_clz   
#define clzll               __builtin_clzll
#define ctz                 __builtin_ctz
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
const ll mod=1000000007;
void solve() {
  string s,y,ans="";cin>>s;
  y=s;int i;
  // cout<<y nl;
  map<char,int> mp;
  multiset<char> ms;
  // sort(y.begin(),y.end());
  for(i=0;i<s.length();i++){
      mp[s[i]]=i;
  }
  int x=0;
  for(char ch='0';ch<='9';ch++){
    if(mp.find(ch)!=mp.end()){
      for(;x<=mp[ch];x++){
        if(s[x]==ch || s[x]=='9') ms.insert(s[x]);
        else ms.insert(s[x]+1);
      }
    }
    else continue;
  }
  for(auto i:ms) cout<<i;nll;
  // cout<<i nl;
  // cout<<ans nl;
  // map<char,int> mp;
  // for(int j=i;j<s.length();j++){
  //   mp[s[j]]++;
  // }
  // // for(auto j:mp){cout<<j.first<<":"<<j.second nl;}
  // int cnt=0;
  // for(auto it:mp){
  //   cnt++;
  //   if(cnt==1 || it.first=='9'){
  //     for(int k=0;k<it.second;k++) ans+=it.first;
  //   }
  //   else {
  //     for(int k=0;k<it.second;k++) ans+=char((int)it.first +1);
  //   }
  // }
  // cout<<ans;nll;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}

