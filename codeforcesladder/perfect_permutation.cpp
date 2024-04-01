#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
int main(){
    fast;
    // int t;
    // cin>>t;
    
       int a;
       cin>>a;
       if(a%2==0){
         for(int i=1;i<a;i+=2){
             cout<<i+1<<" "<<i<<" ";
         }
       }
       else{
        cout<<-1<<endl;
       }
    
}