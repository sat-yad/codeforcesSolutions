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
  ll n,k;cin>>n;vl arr;vpll v;fl(i,0,n){cin>>k;arr.push_back(k);}
  if(n==0){cout<<0;nll;return;}
  // for(auto i:arr) cout<<i<<" ";
  // nll;
  ll mx=maxe(arr),mn=mine(arr);
  // cout<<mx<<" "<<mn;
  ll ind1=0,ind2=0;
  fl(i,0,n){if(arr[i]==mx) ind1=i+1;} 
  fl(i,0,n){if(arr[i]==mn) ind2=i+1;}
  if(mx==mn){cout<<0;nll;return;}
  if(mx==0){
    cout<<n-1;nll;
    fl(i,n-2,0){cout<<i+1<<" "<<i+2;nll;}
    return;
  }
  else if(mn==0){
    cout<<n-1;nll;
    rfl(i,n-2,0){cout<<i+2<<" "<<i+1;nll;}
    return;
  }
  if(mx>abs(mn)){
  fl(i,0,n){
    if(mx!=arr[i] && arr[i]<0){v.push_back({i+1,ind1}); arr[i]+=mx;}
  }
  fl(i,0,n-1) v.PB({i+2,i+1});
  cout<<v.size();nll;
  for(auto i:v){
    cout<<i.F<<" "<<i.S;nll;
  }
  }
  else{
     fl(i,0,n){
    if(mn!=arr[i] && arr[i]>0){v.push_back({i+1,ind2}); arr[i]+=mn;}
  }
  fl(i,n-2,0) v.PB({i+1,i+2});
  cout<<v.size();nll;
  for(auto i:v){
    cout<<i.F<<" "<<i.S;nll;
  }
  }

}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}

// 84 55 null 59 52 null 58 85 null 75 76 null 59 75 null 66 49 null 70 78 null 86 79 null 69 90 null 58 84 null 83 89 null 66 50 null 82 76 null 70 71 null 91 66 null 65 71 null 86 84 null 58 90 null 58 52 null 69 61 null 81 57
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solve(int i,int j,vector<vector<int>> A){
    if(i==3) return 0;
    if(A[i][j]>0){
        if(j==2) return solve(i+1,0,A);
        else return solve(i,j+1,A);
    }
    int mn=1e9;
    for(int a = 0;a<3;a++){
      for(int b = 0;b<3;b++){
          if(a==i&&b==j) continue;
          if(A[a][b]>1){
              A[a][b]-=1;
              A[i][j]=1;
              if(j==2) mn=min(mn,abs(i-a)+abs(j-b)+solve(i+1,0,A));
              else mn=min(mn,abs(i-a)+abs(j-b)+solve(i,j+1,A));
              A[a][b]+=1;
              A[i][j]=0;
            }
        }
    }
    return mn;
}

int solution(vector< vector<int> > &A) {
    // Implement your solution here
   return solve(0,0,A);
}
