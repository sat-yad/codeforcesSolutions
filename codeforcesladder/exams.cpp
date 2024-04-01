#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n,k;
cin>>n>>k;
 int pr1=2*n;
 int pr2=3*n;
 int pr3=4*n;
 int pr4=5*n;
 if(pr1>k){
  cout<<pr1-k<<endl;
 }
 else if(pr1==k){
    cout<<n<<endl;
 }
else if(k>pr1 && k<=pr2){
    cout<<pr2-k<<endl;
 }
 else{
    cout<<0<<endl;
 }
}
int main(){
    fast;
 solve();
}
// int searchResult(vector<int> arr, int k){
//     vector<int>::iterator it;
//     it = find(arr.begin(), arr.end(), k);
//     if(it != arr.end())
//         return (it - arr.begin());
//     else
//         return -1;
// }