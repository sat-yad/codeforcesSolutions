#include <bits/stdc++.h>
using namespace std;
// int solve(int a1[],int a2[],int a,int b,int n){
//     int k=1;
//  for(int i=1;i<n;i++){
//    if(a1[i]==a && a2[i]==b){
//        k++;
//    }
//  }
//  return k;
// }
int main(){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
       for(int i=0;i<n;i++){
              cin>>arr1[i]>>arr2[i];
    }
    int k=1,past=1;
    int maxm=1;
        int a=arr1[0];
        int b=arr2[0];
    for(int i=1;i<n;i++){
        if(arr1[i]==a && arr2[i]==b){
       k++;
       past=1;
   }
   else{
    a=arr1[i];
    b=arr2[i];
     maxm=max(maxm,k);
     k=1;
     past=0;
   }
    }
    if(past==1){
     maxm=max(maxm,k);
    }
   cout<<maxm<<endl;
}