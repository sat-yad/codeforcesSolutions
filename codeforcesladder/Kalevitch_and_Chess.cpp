#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
char arr[8][8];
int ans=0;
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<8;i++){
    int flag=1;
    for(int j=0;j<8;j++){
        if(arr[i][j]!='B'){
            flag=0;
        }
    }
    if(flag==1){
        ans++;
    }
}
for(int i=0;i<8;i++){
    int flag=1;
    for(int j=0;j<8;j++){
        if(arr[j][i]!='B'){
            flag=0;
        }
    }
    if(flag==1){
        ans++;
    }
}
if(ans==16){
    ans=8;
}
cout<<ans<<endl;
}
int main(){
    fast;
 solve();
}
