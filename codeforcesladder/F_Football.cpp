#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n,a,b;
  cin>>n>>a>>b;
  if(n==1){
    cout<<0<<endl;
    cout<<a<<":"<<b<<endl;
  }
  else if(a+b>=n)
    {
      if(a==0){
        cout<<0<<endl;
        cout<<0<<":"<<b-n<<endl;
        for(int i=0;i<n-1;i++){
          cout<<0<<":"<<1<<endl;
        }
        
      }
      if(b==0){
        cout<<0<<endl;
        cout<<b-n<<":"<<0<<endl;
        for(int i=0;i<n-1;i++){
          cout<<1<<":"<<0<<endl;
        }
  }
  }
  
}
int main(){
    fast;
 solve();
}
