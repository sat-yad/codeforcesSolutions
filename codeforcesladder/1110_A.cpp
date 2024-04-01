#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll even = 0, odd = 0;
    int k, n;
    cin >> k >> n;
    ll a[n];
    fl(0, n)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (k % 2 == 0)
    {
        if (a[n - 1] % 2 == 0)
            cout << "even";
        else
            cout << "odd";
    }
    else
    {
        if ((n - even) % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd";
    }
}
int main(){
    fast;
ll t=1;
// cin>>t;
while(t--){
 solve();
}
}