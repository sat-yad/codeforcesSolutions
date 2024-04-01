#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll n,cnt=1,x=1,t;
    cin>>n;
     while(true){
        x=cnt*(cnt+1)/2;
        if(x>=n){
            break;
        }
        cnt++;
     }
     t=x;
     t=cnt*(cnt-1)/2;
     cout<<n-t<<endl;
}
int main(){
    fast;
 solve();
}
