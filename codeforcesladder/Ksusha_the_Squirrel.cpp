#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
   int n,k;
   cin>>n>>k;
   string s; 
   cin>>s;
  int cnt=0;
   for(int i=0;i<s.length()-1;i++){
       if(s[i]=='#'){
        cnt++;
       }
       else{
            cnt=0;
   }
   if(cnt>=k){
    cout<<"NO"<<endl;
    return ;
   }
}
cout<<"YES"<<endl;
}
int main(){
    fast;
 solve();
}
