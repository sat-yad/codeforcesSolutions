#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
template <class T1, class T2, class Pred = std::less<T2>>
struct sort_pair_second
{
    bool operator()(const std::pair<T1, T2> &left, const std::pair<T1, T2> &right)
    {
        Pred p;
        return p(left.second, right.second);
    }
};
void solve() {
  ll n,s,a,b,max=INT_MIN;cin>>n>>s;
//   vector<pair<int ,int >> vp;
  fl(0,n){cin>>a>>b; if(a+b>max){max=a+b; if(s>max) max=s;}}
  cout<<max;nl;
//   sort(vp.begin(), vp.end(), sort_pair_second<int, int, greater<int>>());
//   cout<<vp[0].second+(s-vp[0].first);nl;
}
int main(){
    fast;
 solve();
}
