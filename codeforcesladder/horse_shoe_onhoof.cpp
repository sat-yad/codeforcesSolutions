#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
int main(){
int a1,a2,a3,a4;
cin>>a1>>a2>>a3>>a4;
   int arr[4]={a1,a2,a3,a4};
//    for(int i=0;i<4;i++){
//     cin>>arr[i];
       sort(arr,arr+4);
     int  res=0;
        for (int i = 0; i < 4; i++) {
        while (i < 3 && arr[i] == arr[i + 1])
            i++;
        res++;
    }
 
    cout<<4-res;
}

    // int count=0;
    // for(int i=0;i<3;i++){
    //     for(int j=i+1;j<4;j++){
    //       if(arr[i]==arr[j]){
    //         count++;
    //         arr[j]=INT_MIN;
    //       }
    //     }
    // }
    // cout<<count;
       

   