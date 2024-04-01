#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n,j=0;
  cin>>n;
  string arr;
  vector<char> ch;
  cin>>arr;
if(n%2==1){
    ch.push_back(arr[0]);
    ch.push_back(arr[1]);
    ch.push_back(arr[2]);
    ch.push_back('-');
    for(int i=3;i<n;i+=2){
        ch.push_back(arr[i]);
        ch.push_back(arr[i+1]);
        ch.push_back('-');
    }
}
else{
    for(int i=0;i<n;i+=2){
        ch.push_back(arr[i]);
        ch.push_back(arr[i+1]);
        ch.push_back('-');
    }
}
if(ch[ch.size()-1]=='-'){
    ch.pop_back();
}
for(int i=0;i<ch.size();i++){
    cout<<ch[i];
}
  
}
int main(){
    fast;
 solve();
}
