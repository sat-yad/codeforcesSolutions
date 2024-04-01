#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
 int  isPrime(int n)
{

    for (int i = 2; i*i<=n; i++)
        if (n % i == 0){
            return 0;
        }
    return 1;
}
void solve() {
   int n;
   cin>>n;
   ll count1=0;
   int flag=1;
   for(int i=6;i<=n;i++){
    ll c=0;
    for(int j=2;j<=i;j++){
        
        int m=isPrime(j);
        int k=i%j;
      if(m==1 && k==0){
        c++;
        }
      }
    
    if( c==2){
       count1++;
    }
   }
     cout<<count1<<endl;
}
int main(){
    fast;
 solve();
}
