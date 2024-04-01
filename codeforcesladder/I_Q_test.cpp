#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int n,cnt=0,eve_pos=0,odd_pos=0,c=0;
 cin>>n;
 int arr[n];
 for(int i=1;i<=n;i++){
    cin>>arr[i];
    if(arr[i]%2==0){
       cnt++;
       eve_pos=i;
    }
    else{
         c++;
         odd_pos=i;
    }
 }
 if(cnt==1){
    cout<<eve_pos<<endl;
 }
if(c==1){
    cout<<odd_pos<<endl;
}
}
int main(){
    fast;
 solve();
}
