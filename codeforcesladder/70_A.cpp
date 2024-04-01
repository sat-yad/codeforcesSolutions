#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
#define N 1000003
void solve() {
 ll n,p=1;cin>>n;
 if(n==0){cout<<1;nl;return;}
 for(int i=1;i<n;i++) p=(p*3)%N;
 cout<<p; 
 nl;
}
int main(){
    fast;
 solve();

}
