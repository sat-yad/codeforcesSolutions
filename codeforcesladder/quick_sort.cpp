#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
        int n, k;
        cin >> n >> k;
        int now = 1;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (now == x)
                now++;
        }
        now--;
        if (now == n)
            cout << 0 << "\n";
        else
            cout << (n - now - 1) / k + 1 << "\n";
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}