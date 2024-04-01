#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  string str;
  getline(cin,str);
  int cnt=0,cnt1=0,index=-1;
  int n=str.length();
  for(int i=0;i<n;i++){
      if(str[i]=='1'){
         index=i;
         break;
      }
  }
  if(index>-1){
    for(int i=index;i<n;i++){
        if(str[i]=='0'){
            cnt1++;
        }
    
  if(cnt1>=6  ){
    cout<<"yes"<<endl;
    return;
   }
 }
}
cout<<"no"<<endl;
  
}
int main(){
    fast;
 solve();
}

