#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
ll power(ll n){
    int flag=0;
    for(int i=0;i<=30;i++){
        ll N1=pow(2,i);
        for(int j=0;j<20;j++){
            ll N2=pow(3,j);
            if(n>=N2){
            ll N=N1*N2;
            if(n==N){
                flag=1;
                break;
            }
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==1){
        return 1;
    }
    else{
        return 0;
    }
}
void solve(){
    ll l,r,count=0;
    cin>>l>>r;
     for(int i=l;i<r+1;i++){
        if(power(i)==1){
           count++;
        }
     }
   cout<<count<<endl;
}

int main(){
    fast;
 solve();
}