#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
   
    while(t--){
         long long n;
         cin>>n;
        if(n==1){
            cout<<2<<endl;
        }
       else if(n%3==1){
             long long a=(n+2)/3;
            //  long long b=n/2;
             cout<<a<<endl;
         }
          else if(n%3==0 && n%2==0){
               cout<<n/3<<endl;
          }
           else if(n%3==0){
               cout<<n/3<<endl;
           }
           else if(n%3==2){
            cout<<n/3+1<<endl;
           }
}
}
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
// }