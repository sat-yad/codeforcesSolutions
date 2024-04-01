#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n;cin>>n;
for(int i=1;i<=sqrt(n);i++){
    if(n%i==0 ){
       if(i*i!=n) cout<<i<<" "<<n/i<<" ";
     else cout<<i<<" ";
        }
    
}
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}
/*
3
3 5
1 4 2 8 5
7 9 2 1 4
3 8 5 3 1
1 4
4 15 1 10
4 3
1 2 3
3 2 1
1 2 1
4 2 7
*/