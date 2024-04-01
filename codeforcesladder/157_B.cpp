#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
// #define pi=3.1415926536;
void solve() {
   int n;cin>>n;
   int arr[n];
   int sum=0;
   cout<<setprecision(12);
   for(int i=0;i<n;i++){cin>>arr[i];}
   sort(arr,arr+n);
   for(int i=n-1;i>0;i-=2){
    sum+=(pow(arr[i],2)-pow(arr[i-1],2));
   }
   if(n%2==1){
   sum+=(pow(arr[0],2));
   }
   double ans=sum*3.1415926536;
   cout<<ans;nl;
}
int main(){
    fast;
 solve();
}
