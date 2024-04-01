#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
int digits(int n){
    int count=0;
       while(n>9){
        count++;
        n=n/10;
       }
       return count;
}
void solve(){
      ll A,B;
      cin>>A>>B;
       ll copy= B;
       ll c1=0;
         ll c2=digits(B);
         while(copy!=0){
               int d=copy%10;
               if(d==9){
                      c1++;
               }
               copy/=10;
         }
          cout<<A*max(c1,c2)<<endl;
}
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}