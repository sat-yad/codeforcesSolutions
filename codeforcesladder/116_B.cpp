#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n,m,cnt=0,ans=0;cin>>n>>m;
 char arr[n][m];
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
 }
 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < m; j++)
    {
        if(arr[i][j]=='W'){
        if(arr[i-1][j]=='P' && i-1>=0) cnt++;
        if (arr[i+1][j] == 'P' && i + 1 < n) cnt++;
        if (arr[i][j+1] == 'P' && j + 1 < m) cnt++;
        if (arr[i][j-1] == 'P' && j - 1 >= 0) cnt++;
        if(cnt>=1){ans++; cnt=0;}
      }  
   }
}
cout<<ans;nl;
}
int main(){
    fast;
 solve();
}
