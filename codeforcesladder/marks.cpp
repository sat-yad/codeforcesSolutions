#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int n,m,cnt=0,z=0;
cin>>n>>m;
int arr[n*m]={0};
   vector<string> box(n);
 
    for (int  i = 0; i < n; i++)
    {
        cin >> box[i];
    }
   for(int j=0;j<m;j++){
          char max='0';
          for(int i=0;i<n;i++){
              if(box[i][j]>max){
              max=box[i][j];
            }
       }
          for(int i=0;i<n;i++){
              if(box[i][j]==max){
              arr[i]=1;
          }
       }
   }
    for(int i=0;i<n*m;i++){
    if(arr[i]==1){
        cnt++;
    }
   }
   cout<<cnt<<endl;
}
int main(){
    fast;
 solve();
}
