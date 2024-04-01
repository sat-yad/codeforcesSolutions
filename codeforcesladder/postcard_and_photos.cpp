#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
string str;
cin>>str;
int cnt=0,c=1;
char ch=str[0];
for(int i=1;i<str.length();i++){
  if(ch==str[i]){
    c++;
  }
  else{
    ch=str[i];
    cnt+=(c+4)/5;
    c=1;
  }
}
cnt+=(c+4)/5;
cout<<cnt<<endl;

}
int main(){
    fast;
 solve();   
}
