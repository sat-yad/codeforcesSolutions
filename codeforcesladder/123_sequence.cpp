#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n;
  cin>>n;
 int  arr[n];
 int a[3]={0};
 for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1){
        a[0]++;
    }
    else if(arr[i]==2){
        a[1]++;
    }
    else{
        a[2]++;
    }
 }
   sort(a,a+3);
   cout<<a[0]+a[1]<<endl;



}
int main(){
    fast;
 solve();
}
