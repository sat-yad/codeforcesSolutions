#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int n;cin >> n;ll sum = 0, ans = 0;
    vector<int>a(n +1);
    fl(0,n){cin>>a[i];ans+=abs(a[i]);}
    bool fg=1;
    fl(0,n){
        if (a[i] < 0) fg=0;
        else if (a[i] == 0)continue;
        else{
            if(fg ==0){sum++;fg = 1;}
        }
    }
    if(fg == 0) sum++;
    cout<<ans<<" "<<sum<<"\n";
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}