#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n;cin>>n;
    string ans,ss,s="as";cin >> ss;
    unordered_map<string,int> mp;
    int m=0;
    ans =s;
    for (int i=1;i<n;i++){
        s[0]=ss[i-1];
        s[1]=ss[i];
        mp[s]++;
        if (mp[s]>m){
            m=mp[s];ans=s;
        }
    }
    cout<<ans;nl;
}
int main(){
    fast;
 solve();
}
