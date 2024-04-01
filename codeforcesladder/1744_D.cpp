#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n,x;cin >> n;
    map<int, int> mp;int t = n;
    for(int i = 1;i<= n;i++){
        cin >> x;
        t -= __builtin_ctz(x);
        mp[-__builtin_ctz(i)]++;
    }
    // for(auto i:mp){cout<<i.first<<" "<<i.second;nl;}
    int ans = 0;
    for(auto& i:mp){
        // cout << i.first << " " << i.second;
        // nl;
        if (t <= 0) break;
        while (i.second--){
            ans++;t+=i.first;
            if (t <= 0) break;
        }
    }
    if (t > 0) cout<<-1;
    else cout<<ans;
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
