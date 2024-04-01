#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll n, a[5] = {0};
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        a[x] += 1;
    }
    ll ans = a[4] + a[3] + a[2] / 2;
    a[1] -= a[3];
    if (a[2] % 2 == 1)
    {
        ans++;
        a[1] -= 2;
    }
    if (a[1] > 0)
        ans += (a[1] + 3) / 4;
    cout << ans;
}
int main(){
    fast;
 solve();   
}
