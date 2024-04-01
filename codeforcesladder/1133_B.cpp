#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   ll n,k,x,cnt=0;cin>>n>>k;
   ll arr[n];unordered_map<ll,ll>mp;
   for(ll i=0;i<n;i++){
    cin>>arr[i];
    x=arr[i]%k;
    mp[x]++;
   }
   sort(arr,arr+n,greater<ll>());
   for(ll i=0;i<n;i++){
    x=arr[i]%k;
    if(x==0 && mp[x]>=2){
        cnt+=2;
        mp[x]-=2;
    }
    else{ 
        if(mp[k-x] && mp[x] && (k-x)!=x){
            cnt+=2;
            mp[k-x]--;
            mp[x]--;
        }
        if((k-x)==x && mp[x]>=2){
              cnt+=2;
            mp[k-x]--;
            mp[x]--;
        }
   }
   }
   cout<<cnt;nl;
}
int main(){
    fast;
 solve();
}
/*7 3
1 2 2 3 2 4 5
0-1
1-2
2-4

8 2
1 2 2 3 2 4 6 10
0-6
1-2

7 2
1 2 2 3 2 4 10
0-5
1-2

*/