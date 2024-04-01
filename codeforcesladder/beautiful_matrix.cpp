#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    int arr[5][5];
    int x,y;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
     cin>>arr[i][j];
     if(arr[i][j]==1){
         x=i;y=j;
     }
    }
   
}
cout<<abs(2-x)+abs(2-y)<<endl;
}
int main(){
    fast;
 solve();
}c