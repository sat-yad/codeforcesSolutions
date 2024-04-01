#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
     cin>>n>>k;
     long long a=(n+1)/2;
    //  long long arr[n];
//     long long j=1;
//      for(long long  i=1;i<=n;i+=2){
//         arr[j]=i;
//         j++;
//      }
//    long long a=j;
//      for(long long i=2;i<=n;i+=2){
//       arr[a]=i;
//       a++;
//      }
//      cout<<arr[k];
      if(k<=a){
          cout<<2*k-1;
      }
      else{
        cout<<2*(k-a);
      }
}