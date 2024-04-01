#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
// brocode is not officia;lly thing 
void solve() {
  int n;
  cin>>n;
  int a[n];
  int b[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
  int count=0,j=0;
  int res[n];
  for(int i=0;i<n;i++){
    if(a[i]<=b[i]){
    count++;
    res[j]=a[i];
    j++;
    }
}
cout<<count<<endl;
for(int i=0;i<j;i++){
  cout<<res[i]<<" ";
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