#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll A,sum=0;
    cin>>A;
    ll arr[A];
    for(int i=0;i<A;i++){
        cin>>arr[i];
         sum+=arr[i];
    }
    cout<<sum<<endl;  
}
int main(){
    fast;
 solve();
}
