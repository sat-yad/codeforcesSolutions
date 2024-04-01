#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif


void solve() {
   ll n,k,sum=0,cnt=0;
   cin>>n>>k;
   vector<int>arr;
    // int i=0;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++){
        if (prime[p]){
           arr.push_back(p);
        }
}
// for(int i=0;i<arr.size();i++){
//       cout<<arr[i]<<" ";
// }
for(int i=1;i<arr.size();i++){
    sum=arr[i]+arr[i+1]+1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==sum){
            cnt++;
        }
    }
}
if(cnt>=k){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
int main(){
    fast;
 solve();
}
