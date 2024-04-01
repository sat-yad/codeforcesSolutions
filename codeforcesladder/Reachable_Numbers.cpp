#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
int fun(int n){
 if ((n + 1) % 10 == 0)
    {
        n = (n + 1) / 10;
        while (n % 10 == 0)
            n /= 10;
    }
    else{
    n++;
    }
    return n;
}
void solve() {
 int n;
    cin >> n;
    int ans = 0;
    while (true)
    {
        if (n - 10 < 0)
        {
            ans += 9;
            break;
        }
        n=fun(n);
        ans++;
    }
    cout<<ans<<endl;
}
int main(){
    fast;
 solve();
}
