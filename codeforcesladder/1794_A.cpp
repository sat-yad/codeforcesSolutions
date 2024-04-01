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
// sort(v.begin(), v.end(), sort_pair_second<int, int, greater<int>>());
void solve() {
 int n;cin>>n;string s;vector<pair<string ,int>> v;
 fl(0,2*n-2){cin>>s; int l=s.size();v.push_back(make_pair(s,l));}
 sort(v.begin(), v.end(), sort_pair_second<string, int, greater<int>>());
//  for(auto i:v) cout<<i.second<<" ";nl;
// string s1=v[0].first;
// string s2=v[1].first;
// sort(s1.begin(),s1.end());
// sort(s2.begin(),s2.end());
// int cnt=0;
// for(int i=0;i<v.size();i+=2){
//         string s1 = v[i].first;
//         string s2 = v[i+1].first;
//         sort(s1.begin(), s1.end());
//         sort(s2.begin(), s2.end());
//         if (s1==s2) cnt++;
// }
// if(cnt==n-1) cout<<"YES";
// else cout<<"NO";
string s1=v[0].first,s2=v[1].first;
for(int i=0;i<s1.size();i++){
    if(s1[i]!=s2[s1.size()-1-i]){cout<<"NO";nl;return;}
}
cout<<"YES";
nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}