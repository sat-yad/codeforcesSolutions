#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
char c[8][8];
   for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        cin>>c[i][j];
    }
   }
   for(int i=0;i<8;i++){
     int k=0;
     for(int j=0;j<8;j++){
        if(c[i][j]=='R'){
            k++;
        }
        else{
            break;
        }
     }
     if(k==8){
        cout<<"R";
        return;
     }
   }
   cout<<"B";
}
int main(){
    fast;
ll t;
cin>>t;
while(t--){
 solve();
 nl;
}
}