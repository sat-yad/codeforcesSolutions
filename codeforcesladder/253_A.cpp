#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
// #define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n,m;
cin>>n>>m;
// if(n==m){
// 	for(int i = 0;i<m;i++)
// 		cout<<"BG";
// }
// else if(n>m){
// 	for(int i = 0;i<m;i++)
// 		cout<<"BG";
// 	n=n-m;
// 	for(int i = 0;i<n;i++)
// 		cout<<"B";
// }
// else if(m>n){
// 	for(int i = 0;i<n;i++)
// 		cout<<"GB";
// 	m=m-n;
// 	for(int i = 0;i<m;i++)
// 		cout<<"G";
// }
if(n>m){
while(n>0 || m>0){
    if(n>0){cout<<'B';n--;}
    if(m>0){cout<<'G';m--;}
}
}
else{
   while(n>0 || m>0){
    if(m>0){cout<<'G';m--;}
    if(n>0){cout<<'B';n--;}
} 
}
}
int main(){
    // fast;
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
 solve();
}
