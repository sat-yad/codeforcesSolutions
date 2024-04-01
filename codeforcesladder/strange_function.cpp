#include <bits/stdc++.h>
    using namespace std;
    #define ll long long
#define db double
const ll mod = 1e9 + 7;
// ll ouput(int j){
//     ll s;
    int main(){
        ll t;
        cin >>t;
        //   ll s=0;
        while(t--){
           ll  n;
            cin>>n;
            ll s=0;
        ll j=1;
        while(j<=n){
                for( ll i=1;i<=j+1;){
                    if(j%i==0){
                       i++;
                    }
                    else{
                        s+=i;
                       break;
                    }
        }
      
        j=j+1;
        }
   cout<<(s%mod)<<endl;
    }
    }














