#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
     ll y,k,n;
     cin>>y>>k>>n;
    //  vector<int >bag;
     ll s=n-y;
     ll x;
    //  ll rem=y%k;
    ll count=0;
     ll rem=k-y%k;
    for( x=rem;x<=s;x+=k){
        
        if((y+x)%k==0){
          cout<<x<<" ";
          count++;
    }
   
   
}
if(count==0){
        cout<<-1<<endl;
    }

}
// 386 1 2747