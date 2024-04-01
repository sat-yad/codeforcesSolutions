#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
ll n, k;
cin >> n >> k;
ll pos = ceil((1.0f + sqrt(8 * k + 1)) / 2.0f);
string ans(n, 'a');
ans[n - pos] = 'b';
ll idx = n - pos;
ans[idx + 1 + (pos * (pos - 1) / 2) - k] = 'b';
cout << ans << endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}