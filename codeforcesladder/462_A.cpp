#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   int n,cnt;cin>>n;
   char ch[n+1][n+1];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>ch[i][j];
    }
   }
    for(int i=0;i<n;i++){ 
        cnt=0;
    for(int j=0;j<n;j++){
        //  cnt=0;
        // if(ch[i][j]=='o'){
            if(ch[i][j-1]=='o'  &&j-1>=0 ){cnt++;}
            if(ch[i][j+1]=='o' && j+1<n){cnt++;}
            if(ch[i-1][j]=='o' && i-1>=0){cnt++;}
            if(ch[i+1][j]=='o' && i+1<n){cnt++;}
            if(cnt%2!=0){cout<<"NO";nl;return;}
        }
        
    }
   cout<<"YES";nl;
}
int main(){
    fast;
 solve();
}
