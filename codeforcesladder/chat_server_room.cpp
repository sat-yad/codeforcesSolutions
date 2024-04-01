#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   int c=0;
   string str;
   int sum=0,n,cnt;
   while(getline(cin,str)){
      if(str[0]=='+'){
        c++;
      }
     else if(str[0]=='-'){
        c--;
      }
      else{
      n=str.size();
      cnt=str.find(':');
      sum= sum + c*(n-cnt-1);
    //   cout<<sum<<endl;
   }
   }
    cout<<sum;
    return ;
}
int main(){
    fast;
 solve();
}
