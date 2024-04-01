#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
        ll n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] + sum < i)
            {
                ok = false;
                break;
            }
            else
            {
                sum += (a[i] - i);
                a[i] = i;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}