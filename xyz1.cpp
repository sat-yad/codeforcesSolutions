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

}
// bool isPerfectSquare(long long num) {
//     long long root = sqrt(num);
//     return root * root == num;
// }
// int run(int arr[],int n){
//   int cnt=0;
//   for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//       if(isPerfectSquare(arr[i]*arr[j])) cnt++;
//     }
//   }
//    return cnt;
// }
int solve(int v[],int n,int x,int y) {
    vector<int>dp(n+1,INT_MAX);
    dp[0]=0;
    for (int i=1;i<= n;i++) {
        dp[i]=min(dp[i],dp[i-1]+v[i-1]);
        for (int j=1;j<i;j++){
            dp[i]=min(dp[i],dp[i-j-1]+y+j*x);
        }
    }
    return dp[n];
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
  int n,x,y;
  cin>>n>>x>>y;
  // int arr[n];
  int v[n];
  // unordered_map<int,int> mp;
  // for(int i=0;i<1e12;i++){

  // }
  for(int i=0;i<n;i++) cin>>v[i];
  cout<<solve(v,n,x,y)<<endl;
}
}

