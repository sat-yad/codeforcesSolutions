// #include <bits/stdc++.h>
// using namespace std;
// #define ll               long long
// #define uin              unsigned int
// #define ull              unsigned long long
// #define ld               long double 
// #define fl(i,w,n)        for(ll i=w;i<n;i++)
// #define rfl(i,w,n)       for(ll i=w;i>=n;i--)
// #define  F              first
// #define  S             second
// #define  B              begin()
// #define  E               end()
// #define EB               emplace_back
// #define PB               push_back
// #define P                pop()
// #define PRES(c,x)        ((c).find(x)!=(c).end())
// #define all(x)           x.begin(), x.end()
// typedef vector<string>   vs;
// typedef pair<int,int>    pii;
// typedef pair<ll,ll>      pll;
// typedef vector<int>      vi;
// typedef vector<ll>       vl;
// typedef vector<vi>       vvi;
// typedef vector<vl>       vvl;
// typedef vector<pii>      vpii;
// typedef vector<pll>      vpll;
// #define um(x, y)          unordered_map<x, y>
// #define us(x)             unordered_set<x>
// #define mp                  map ii 
// #define mpl                 map lii
// #define mem1(a)                memset(a,-1,sizeof(a))
// #define mem0(a)                memset(a,0,sizeof(a))
// #define sum(a)          ( accumulate ((a).begin(), (a).end(), 0ll))
// #define mine(a)         (*min_element((a).begin(), (a).end()))
// #define maxe(a)         (*max_element((a).begin(), (a).end()))
// #define mini(a)         ( min_element((a).begin(), (a).end()) - (a).begin())
// #define maxi(a)          ( max_element((a).begin(), (a).end()) - (a).begin())
// #define lowb(a, x)      ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
// #define uppb(a, x)      ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
// #define nl               <<"\n";
// #define nll              cout<<"\n";
// #define Yes              cout<<"Yes"<<"\n";
// #define No               cout<<"No"<<"\n";
// #define PI               3.1415926535897932384626
// #define SET(n)           cout << fixed << setprecision(n)
// #define get(s)              getline(cin, s)
// #define ppc                 __builtin_popcount
// #define ppcll               __builtin_popcountll
// #define clz                 __builtin_clz   
// #define clzll               __builtin_clzll
// #define ctz                 __builtin_ctz
// #define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
// #define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
// const ll mod=1000000007;
// void solve() {
//   // int n,m;cin>>n>>m;
//   // string s="vika";
//   // vector<string> res;
//   // for(int i=0;i<n;i++){
//   //   string str;cin>>str;
//   //   res.push_back(str);
//   // }
//   // int cnt=0;
//   // for(int i=0;i<m;i++){
//   //   for(int j=0;j<n;j++){
//   //     if(res[j][i]==s[cnt]){
//   //       cnt++;break;
//   //     }
//   //   }
//   //   if(cnt==4){break;}
//   // }
//   // if(cnt==4){
//   //     Yes;
//   // }
//   // else{No;}
  
//   // nll;
//   ull n;cin>>n;
//   ull x=(-1+sqrt(1+8*n))/2;
//   ull y=x*(x+1)/2;
//   cout<<x+n+1-y;nll;
// }
// int main(){
//     fast;
// ll t;
// cin>>t;
// while(t--){
//  solve();
// }
// }

// template<typename T = long long int>
// T nCr(T n, T k){
// if(k>n/2){
// k=n-k;
// }
// T ans=1;
// for(T i=0;i<k;++i){
// ans=(ans*(n-i))/(i+1);
// }
// return ans;
// }
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int Count(string S);


int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << Count(S) << endl;
    }
return 0;
}


// } Driver Code Ends


int Count(string S){
    //complete the function here
    int cnt=0;
    for(int i=0;i<S.length();i++){
        if((S[i]>='a' && S[i]<='z') ||(S[i]>'A' && S[i]<='Z')) cnt++;
    }
    return cnt;
}
