#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
     ll n,c,ans=0;cin>>n>>c;
     priority_queue<ll,vector<ll>,greater<ll>> pq;
     ll arr[n];
     fl(0,n) cin>>arr[i];
     fl(0,n) pq.push(arr[i]+i+1);
    //  for(int i=0;i<n;i++){ cout<<pq.top()<<" ";pq.pop();}
     while(!pq.empty() && c>=pq.top()){
        ans++;
         c-=pq.top();
         pq.pop();
     }
     cout<<ans;nl;
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
}
}