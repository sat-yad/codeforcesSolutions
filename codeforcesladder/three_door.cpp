#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int x;
    cin>>x;
    int arr[4];
     fl(1,4) { cin>>arr[i]; }
    if(arr[x]==0 || arr[arr[x]]==0){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        return;
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