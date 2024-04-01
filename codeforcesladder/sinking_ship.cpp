#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n;
  cin>>n;
  string name[n];
  string status[n];
  for(int i=0;i<n;i++){
    cin>>name[i]>>status[i];
  }
  vector<string >rats,womenchildren,man,captain;
  int arr[n];
for(int i=0;i<n;i++){
   if(status[i]=="rat"){
    arr[i]=0;
    rats.push_back(name[i]);
   }
   else if(status[i]=="child" || status[i]=="woman"){
    arr[i]=1;
    womenchildren.push_back(name[i]);
   }
   else if(status[i]=="man"){
    arr[i]=2;
    man.push_back(name[i]);
   }
   else{
    arr[i]=3;
    captain.push_back(name[i]);
       }
}
 for(auto i:rats){
    cout<<i<<endl;
 }
 for(auto i: womenchildren){
    cout<<i<<endl;
 }
  for(auto i:man ){
    cout<<i<<endl;
  }
  for(auto i : captain){
    cout<<i<<endl;
  }
}
int main(){
    fast;
 solve();
}
