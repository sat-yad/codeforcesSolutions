#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll arr[3], ans = 0;
    fl(0, 3) cin >> arr[i];
    sort(arr, arr + 3);
    if (arr[2] > arr[0] + arr[1]) ans = arr[0] + arr[1];
    else  ans = (arr[0] + arr[1] + arr[2]) / 2;
    cout << ans;
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