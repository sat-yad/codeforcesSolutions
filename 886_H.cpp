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
#define mp                  map ii 
#define mpl                 map lii
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
  ll n,m,x,y,z;cin>>n>>m;
  vpll adj[n+1];
  fl(i,0,m){cin>>x>>y>>z;
  adj[y].PB({x,-1*z});
  adj[x].PB({y,z});
  }
  vector<bool>vis(n+1,0);
  map<ll,ll>mip;queue<ll>q;
  bool flag=0;
  fl(i,0,n+1){
    if(vis[i]) continue;
    q.push(i);
    mip[i]=0;
    while(!q.empty()){
      ll temp=q.front();
      q.pop();
      vis[temp]=1;
      for(auto it:adj[temp]){
          if(vis[it.first]){
          if(mip[temp]+it.second!=mip[it.first]){flag=1;break;}
          }
          else{
            mip[it.first]=mip[temp]+(it.second);
            vis[it.first]=1;
            q.push(it.first);
          }
      }
    }
  if(flag)break;
}
  if(flag){cout<<"NO\n";}
  else{cout<<"YES\n";}
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}

